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

    // CABEZA
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(80.0,130.0); // X,Y
        glVertex2f(110.0,130.0); // X+,Y
        glVertex2f(110.0,110.0); // X+, Y-
        glVertex2f(80.0,110.0); // X-, Y-
    glEnd();

    // CUELLO
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(85.0,108.0); // X,Y
        glVertex2f(105.0,108.0); // X+,Y
        glVertex2f(105.0,105.0); // X+, Y-
        glVertex2f(85.0,105.0); // X-, Y-
    glEnd();

    //TRONCO
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(65.0,100.0); // X,Y
        glVertex2f(125.0,100.0); // X+,Y
        glVertex2f(125.0,65.0); // X+, Y-
        glVertex2f(65.0,65.0); // X-, Y-
    glEnd();

    // BRAZO
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(15.0,100.0); // X,Y
        glVertex2f(175.0,100.0); // X+,Y
        glVertex2f(175.0,93.0); // X+, Y-
        glVertex2f(15.0,93.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(25.0,105.0); // X,Y
        glVertex2f(45.0,105.0); // X+,Y
        glVertex2f(45.0,88.0); // X+, Y-
        glVertex2f(25.0,88.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(145.0,105.0); // X,Y
        glVertex2f(165.0,105.0); // X+,Y
        glVertex2f(165.0,88.0); // X+, Y-
        glVertex2f(145.0,88.0); // X-, Y-
    glEnd();

    // CINTURA
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(75.0,65.0); // X,Y
        glVertex2f(115.0,65.0); // X+,Y
        glVertex2f(115.0,60.0); // X+, Y-
        glVertex2f(75.0,60.0); // X-, Y-
    glEnd();

    // PIERNAS
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(65.0,60.0); // X,Y
        glVertex2f(125.0,60.0); // X+,Y
        glVertex2f(125.0,40.0); // X+, Y-
        glVertex2f(65.0, 40.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(75.0,53.0); // X,Y
        glVertex2f(115.0,53.0); // X+,Y
        glVertex2f(115.0,40.0); // X+, Y-
        glVertex2f(75.0,40.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(60.0,40.0); // X,Y
        glVertex2f(80.0,40.0); // X+,Y
        glVertex2f(80.0,30.0); // X+, Y-
        glVertex2f(60.0,30.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(110.0,40.0); // X,Y
        glVertex2f(130.0,40.0); // X+,Y
        glVertex2f(130.0,30.0); // X+, Y-
        glVertex2f(110.0,30.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(57.0,29.0); // X,Y
        glVertex2f(83.0,29.0); // X+,Y
        glVertex2f(83.0,25.0); // X+, Y-
        glVertex2f(57.0,25.0); // X-, Y-
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(107.0,29.0); // X,Y
        glVertex2f(133.0,29.0); // X+,Y
        glVertex2f(133.0,25.0); // X+, Y-
        glVertex2f(107.0,25.0); // X-, Y-
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

	glFlush();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("points and lines");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();

	return EXIT_SUCCESS;
}
