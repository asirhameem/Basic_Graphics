#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat t=0.0f;
GLfloat speed = 0.02f;
void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void idle()
{
    glutPostRedisplay();
}
void display()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub( 218, 247, 166 );
    int i;
    glBegin(GL_QUADS);

    glColor3ub(100, 100, 204);
    glVertex2f(-0.2f, -1.0f);
    glVertex2f( 0.2f, -1.0f);
    glVertex2f( 0.1f, 0.0f);
    glVertex2f( -0.1f, 0.0f);
    glEnd();
    glLoadIdentity();



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(t,0,0.0,0.1);

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 150, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.6f, -0.1f);
    glVertex2f( 0.6f, 0.1f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 150, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, 0.6f);
    glVertex2f( -0.1f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 150, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.6f, 0.1f);
    glVertex2f( -0.6f, -0.1f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 150, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, -0.6f);
    glVertex2f( 0.1f, -0.6f);
    glEnd();


    glPopMatrix();

    t= t+ speed;



    glFlush();
}

void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

case 'w':
    speed=0.0f;
    break;
case 'a':
    speed=0.02f;
    break;

case 's':
    speed=0.04;
    break;

case 'd':
    speed=0.10;
    break;




glutPostRedisplay();

    }
}
void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
    {    speed += 0.01f;
            }
if (button == GLUT_RIGHT_BUTTON)
    {speed -= 0.01f;   }
glutPostRedisplay();}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Control the Fan");
    glutInitWindowSize(350,350);
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    initGL();
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}
