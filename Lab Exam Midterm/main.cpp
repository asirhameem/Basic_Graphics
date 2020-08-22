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
#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>



/* GLUT callback Handlers */

void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 0.8f);
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	//horn

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.1,0.2);
	glVertex2f(-0.06,0.2);
	glVertex2f(-0.06,0.6);
	glVertex2f(-0.1,0.6);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.1,0.4);
	glVertex2f(0.1,0.4);
	glVertex2f(0.1,0.5);
	glVertex2f(-0.1,0.5);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(0.08,0.2);
	glVertex2f(0.12,0.2);
	glVertex2f(0.12,0.6);
	glVertex2f(0.08,0.6);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.08,0.4);
	glVertex2f(0.08,0.4);
	glVertex2f(0.08,0.3);
	glVertex2f(-0.08,0.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.08,0.3);
	glVertex2f(0.08,0.3);
	glVertex2f(0.08,0.25);
	glVertex2f(-0.08,0.25);
	glEnd();

	//Neck
	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(-0.15,0.3);
	glVertex2f(0.15,0.3);
	glVertex2f(0.15,0.25);
	glVertex2f(-0.15,0.25);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(-0.15,0.25);
	glVertex2f(0.15,0.25);
	glVertex2f(0.15,0.2);
	glVertex2f(-0.15,0.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(-0.2,0.2);
	glVertex2f(0.2,0.2);
	glVertex2f(0.2,0.15);
	glVertex2f(-0.2,0.15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(-0.2,0.15);
	glVertex2f(0.2,0.15);
	glVertex2f(0.2,0.1);
	glVertex2f(-0.2,0.1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 128);

	glVertex2f(-0.2,0.1);
	glVertex2f(0.2,0.1);
	glVertex2f(0.2,0.05);
	glVertex2f(-0.2,0.05);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 128);

	glVertex2f(-0.2,0.05);
	glVertex2f(0.2,0.05);
	glVertex2f(0.2,0.0);
	glVertex2f(-0.2,0.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);

	glVertex2f(-0.2,0.05);
	glVertex2f(0.2,0.05);
	glVertex2f(0.2,0.0);
	glVertex2f(-0.2,0.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 100);

	glVertex2f(-0.2,0.0);
	glVertex2f(0.2,0.0);
	glVertex2f(0.2,-0.05);
	glVertex2f(-0.2,-0.05);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,100,128);

	glVertex2f(-0.18,-0.05);
	glVertex2f(0.18,-0.05);
	glVertex2f(0.18,-0.25);
	glVertex2f(-0.18,-0.25);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-0.2,-0.05);
	glVertex2f(-0.1,-0.05);
	glVertex2f(-0.1,-0.4);
	glVertex2f(-0.2,-0.4);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(0.2,-0.05);
	glVertex2f(0.1,-0.05);
	glVertex2f(0.1,-0.4);
	glVertex2f(0.2,-0.4);
	glEnd();

	//Hand

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex2f(0.25,0.2);
	glVertex2f(0.2,0.2);
	glVertex2f(0.2,-0.2);
	glVertex2f(0.25,-0.2);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex2f(-0.25,0.2);
	glVertex2f(-0.2,0.2);
	glVertex2f(-0.2,-0.2);
	glVertex2f(-0.25,-0.2);

	glEnd();





	glFlush();


}


/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(600,300);


    glutCreateWindow("Batman View");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
