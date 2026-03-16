#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Badan rumah (GL_QUADS)
    glBegin(GL_QUADS);
        glColor3f(0.6,0.8,1);
        glVertex2f(-0.3,-0.3);
        glVertex2f(0.3,-0.3);
        glVertex2f(0.3,0.2);
        glVertex2f(-0.3,0.2);
    glEnd();

    // Atap (GL_TRIANGLE_STRIP)
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1,0,0);
        glVertex2f(-0.35,0.2);
        glVertex2f(-0.2,0.4);
        glVertex2f(0.35,0.2);
        glVertex2f(0.2,0.4);
    glEnd();

    // Pintu (GL_QUAD_STRIP)
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.5,0.3,0.1);
        glVertex2f(-0.05,-0.3);
        glVertex2f(-0.05,-0.05);
        glVertex2f(0.05,-0.3);
        glVertex2f(0.05,-0.05);
    glEnd();

    // Matahari (GL_TRIANGLE_FAN)
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1,1,0);
        glVertex2f(0.6,0.6);
        glVertex2f(0.55,0.55);
        glVertex2f(0.65,0.55);
        glVertex2f(0.7,0.65);
        glVertex2f(0.6,0.7);
        glVertex2f(0.5,0.65);
    glEnd();

    // Bingkai rumah (GL_LINE_LOOP)
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(-0.3,-0.3);
        glVertex2f(0.3,-0.3);
        glVertex2f(0.3,0.2);
        glVertex2f(-0.3,0.2);
    glEnd();

    // Jalan (GL_LINE_STRIP)
    glBegin(GL_LINE_STRIP);
        glColor3f(0,0,0);
        glVertex2f(-0.8,-0.5);
        glVertex2f(-0.4,-0.35);
        glVertex2f(0.0,-0.4);
        glVertex2f(0.4,-0.35);
        glVertex2f(0.8,-0.5);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1,1,1,1);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutCreateWindow("Primitive OpenGL");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
