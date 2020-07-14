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
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(0.0f,1.0f);
	glVertex2f(0.0f,-1.0f);

	// Lines

	glColor3f(1.0,0.0,0.0);
	glVertex2f(-0.5,0.5);
	glVertex2f(0,0.5);

	//Triangle
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(0.2f, 0.2f);
	glVertex2f(.60f, 0.2f);
	glVertex2f(.60f, 0.20f);
	glVertex2f(.30f, 0.80f);
	glVertex2f(.30f, 0.80f);
	glVertex2f(.20f, 0.20f);

	//Quad
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(0.2f, -0.2f);
	glVertex2f(.60f, -0.2f);
	glVertex2f(.60f, -0.20f);
	glVertex2f(.60f, -0.60f);
	glVertex2f(.60f, -0.60f);
	glVertex2f(.60f, -0.60f);
	glVertex2f(0.2f, -0.6f);









	 // x, y

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
