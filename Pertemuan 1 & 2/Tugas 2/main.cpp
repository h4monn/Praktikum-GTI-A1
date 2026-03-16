#include <GL/glut.h>

void kubus(float x, float y)
{
    float s = 0.2;

    glBegin(GL_QUADS);
        glColor3f(0.4, 0.6, 0.8);
        glVertex2f(x, y);
        glVertex2f(x+s, y);
        glVertex2f(x+s, y+s);
        glVertex2f(x, y+s);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(x, y);
        glVertex2f(x+s, y);
        glVertex2f(x+s, y+s);
        glVertex2f(x, y+s);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    kubus(-0.1, -0.8);
    kubus(-0.1, -0.6);
    kubus(-0.1, -0.4);
    kubus(-0.1, -0.2);
    kubus(-0.1,  0.0);

    glFlush();
}

void init()
{
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutCreateWindow("Kubus Bertingkat");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
