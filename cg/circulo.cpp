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
#include<cmath>
#include <GL/glut.h>
#define _USE_MATH_DEFINES

void init2D(float r, float g, float b)
{
	glClearColor(r,g,b,0.0);
	glPointSize(20.0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0.0, 200.0, 0.0, 200.0);
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);

    for(int i =0; i <= 360; i++){
        int r = 50;
        double t = i * 3.1415926535897932384626433832795 / 180;
        glVertex2d(cos(t) * r + 50, sin(t) * r +50);
    }
    glEnd();

	glFlush();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("points and lines");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();

	return EXIT_SUCCESS;
}
