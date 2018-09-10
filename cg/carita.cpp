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

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(158.0,107.0);
        glVertex2d(158.0,107.0);
        glVertex2d(50.0,113.0);
        glVertex2d(50.0,113.0);
    glEnd();
    /*
	//draw two points
	glBegin(GL_POINTS);
        // HAIR
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(164,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(156,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(148,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(140,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(132,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(124,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(116,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(108,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(100,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(92,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(84,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(76,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(68,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(60,110);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(52,110);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(44,110);
    glEnd();
*/



    // FACE
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2d(168.0,107.0);
        glVertex2d(168.0,40.0);
        glVertex2d(40.0,40.0);
        glVertex2d(40.0,107.0);
    glEnd();
    // MOUTH
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(158.0,55.0);
        glVertex2d(158.0,50.0);
        glVertex2d(50.0,50.0);
        glVertex2d(50.0,55.0);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(60.0,60.0);
        glVertex2d(60.0,55.0);
        glVertex2d(50.0,55.0);
        glVertex2d(50.0,60.0);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(158.0,60.0);
        glVertex2d(158.0,55.0);
        glVertex2d(148.0,55.0);
        glVertex2d(148.0,60.0);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(90.0,65.0);
        glVertex2d(90.0,80.0);
        glVertex2d(120.0,80.0);
        glVertex2d(120.0,65.0);
    glEnd();

    // EYES
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(50.0,85.0);
        glVertex2d(50.0,95.0);
        glVertex2d(70.0,95.0);
        glVertex2d(70.0,85.0);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2d(135.0,85.0);
        glVertex2d(135.0,95.0);
        glVertex2d(156.0,95.0);
        glVertex2d(156.0,85.0);
    glEnd();
    /*
	for(int i = 0; i < 10; i++)
	{
		glVertex2i(10+5*i,110);
	}
	*/

	//draw a line
	/*
	glBegin(GL_LINES);
		glVertex2i(10,10);
		glVertex2i(100,100);
	glEnd();
    */
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
