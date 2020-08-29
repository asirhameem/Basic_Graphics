#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat minute = 0.0f;
GLfloat second =0.0f;
GLfloat hour = 0.0f;




void display() {




	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
    GLfloat twicePi = 2.0f * PI;

	int triangleAmount = 50;
	GLfloat x=-.4f; GLfloat y=-.4f; GLfloat radius =.1f;

    //clock


	x=0;y=0; radius=.8;
	//int triangleAmount = 20;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(200,250,255);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
                );
		}
	glEnd();


	//hours

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0,.6);
	glVertex2f(0,.8);

	glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0,-.6);
	glVertex2f(0,-.8);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(.6,0);
	glVertex2f(.8,0);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(-.6,0);
	glVertex2f(-.8,0);

	glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(.75,.31);
	glVertex2f(.59,.29);

	glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(-.75,.31);
	glVertex2f(-.59,.29);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(.69,-.49);
	glVertex2f(.59,-.39);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(-.69,-.49);
	glVertex2f(-.59,-.39);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(.49,.69);
	glVertex2f(.39,.59);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(-.49,.69);
	glVertex2f(-.39,.59);

	glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(.49,-.69);
	glVertex2f(.39,-.59);

	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(-.49,-.69);
	glVertex2f(-.39,-.59);

	glEnd();


    glPushMatrix();

    glRotatef(-second,0,0,1);

	//second hand Rotate
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0,0);
	glVertex2f(.35,.35);

	glEnd();

	glPopMatrix();

    glPushMatrix();
    glRotatef(-minute,0,0,1);

    //minutes Rotate
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0,0);
	glVertex2f(.25,.25);

	glEnd();

	glPopMatrix();

	//Hour Rotate
    glPushMatrix();
    glRotatef(-hour,0,0,1);

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0,0);
	glVertex2f(.15,.15);

	glEnd();


	glPopMatrix();




	minute += 0.001;
	second += 0.006;
	hour += 0.0004;














	glFlush();  // Render now
}
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);

}

void idle()
{
    glutPostRedisplay();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Clock"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutIdleFunc(idle);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
