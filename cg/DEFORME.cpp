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

	// CENTRO = 50
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2d(20,120.0);
        glVertex2d(40,130.0);
        glVertex2d(30.0,100.0);
    glEnd();

// CUADRADO ROJO
	glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2d(95,72.0);
        glVertex2d(120.0, 77.0);
        glVertex2d(140.0,50.0);
        glVertex2d(60.0,50.0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2d(44,60.0);
        glVertex2d(76,60.0);
        glVertex2d(60.0,50.0);
    glEnd();
    // CELESTE
    glBegin(GL_QUADS);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2d(90,90.0);
        glVertex2d(115.0, 95.0);
        glVertex2d(124.0,76.0);
        glVertex2d(95.0,72.0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(100.0,50.0);
        glVertex2d(180.0, 50.0);
        glVertex2d(140.0,20.0);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2d(140.0,20.0);
        glVertex2d(170.0, 43.0);
        glVertex2d(170.0, 28.0);
        glVertex2d(140.0, 5.0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2d(130.0,0.0);
        glVertex2d(170.0, 28.0);
        glVertex2d(170.0, 0.0);
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
