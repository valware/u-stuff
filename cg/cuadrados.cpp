/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>

#include <GL/glut.h>


void init2D(float r, float g, float b)
{
	glClearColor(r,g,b,0.0);
	glPointSize(20.0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0.0, 200.0, 0.0, 150.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0, 0.0, 0.0);

    for (int i = 0; i < 3; i++){
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glBegin(GL_POLYGON);
        if (i%2 != 0){
            glColor3f(i, 0.0, 0.0);
        } else {
            glColor3f(0.0, i, i);
        }

            glVertex2d(168.0- 30*i,145.0 - 30*i);
            glVertex2d(168.0- 30*i,125.0- 30*i);
            glVertex2d(125.0- 30*i,125.0- 30*i);
            glVertex2d(125.0- 30*i,145.0- 30*i);
        glEnd();
    }


    // FACE


	glFlush();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("points and lines");
	init2D(0.0,1.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();

	return EXIT_SUCCESS;
}
