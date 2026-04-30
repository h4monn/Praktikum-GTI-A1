#include <GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, tangan = 0;

static int jariBw1 = 0,jariMd1 = 0,jariTp1 = 0;
static int jariBw2 = 0,jariMd2 = 0,jariTp2 = 0;
static int jariBw3 = 0,jariMd3 = 0,jariTp3 = 0;
static int jariBw4 = 0,jariMd4 = 0,jariTp4 = 0;
static int jariBw5 = 0,jariMd5 = 0,jariTp5 = 0;

void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Kamera
    gluLookAt(0,0,5, 0,0,0, 0,1,0);

    glPushMatrix();

    // Bahu
    glTranslatef (-1.0, 0.0, 0.0); 
    glRotatef (shoulder, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0); 

    glPushMatrix();
        glScalef (2.0, 0.4, 1.0);
        glutWireCube (1.0);
    glPopMatrix();

    // Siku
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef (elbow, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0); 

    glPushMatrix();
        glScalef (2.0, 0.4, 1.0);
        glutWireCube (1.0);
    glPopMatrix();

    // Telapak
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef (tangan, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0); 

    glPushMatrix();
        glScalef (0.6, 0.4, 1.1);
        glutWireCube (1.0);
    glPopMatrix();

    glTranslatef (0.35, 0.0, 0.0);

    // Jari 1
    glPushMatrix();
        glTranslatef (-0.1, 0.2, 0.6);
        glRotatef (jariBw1, 0.0, 0.0, 1.0);

        glTranslatef (0.09, -0.15, 0.2);
        glPushMatrix();
            glScalef (0.4, 0.13, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.2, 0.0, 0.0);
        glRotatef (jariMd1, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.2, 0.1, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.05, 0.0, 0.0);
        glRotatef (jariTp1, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.17, 0.07, 0.2);
            glutWireCube (1.0);
        glPopMatrix();
    glPopMatrix();

    // Jari 2
    glPushMatrix();
        glTranslatef (-0.1, 0.2, 0.5);
        glRotatef (jariBw2, 0.0, 0.0, 1.0);

        glTranslatef (0.18, -0.15, -0.1);
        glPushMatrix();
            glScalef (0.4, 0.1, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.2, 0.0, 0.0);
        glRotatef (jariMd2, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.2, 0.1, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.05, 0.0, 0.0);
        glRotatef (jariTp2, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.17, 0.07, 0.2);
            glutWireCube (1.0);
        glPopMatrix();
    glPopMatrix();

    // Jari 3
    glPushMatrix();
        glTranslatef (-0.1, 0.2, 0.3);
        glRotatef (jariBw3, 0.0, 0.0, 1.0);

        glTranslatef (0.09, -0.15, 0.2);
        glPushMatrix();
            glScalef (0.4, 0.13, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.2, 0.0, 0.0);
        glRotatef (jariMd3, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.2, 0.1, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.05, 0.0, 0.0);
        glRotatef (jariTp3, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.17, 0.07, 0.2);
            glutWireCube (1.0);
        glPopMatrix();
    glPopMatrix();

    // Jari 4
    glPushMatrix();
        glTranslatef (-0.1, 0.2, 0.15);
        glRotatef (jariBw4, 0.0, 0.0, 1.0);

        glTranslatef (0.09, -0.15, 0.2);
        glPushMatrix();
            glScalef (0.4, 0.13, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.2, 0.0, 0.0);
        glRotatef (jariMd4, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.2, 0.1, 0.2);
            glutWireCube (1.0);
        glPopMatrix();

        glTranslatef (0.05, 0.0, 0.0);
        glRotatef (jariTp4, 0.0, 0.0, 1.0);

        glTranslatef (0.1, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.17, 0.07, 0.2);
            glutWireCube (1.0);
        glPopMatrix();
    glPopMatrix();

    // Jempol
    glPushMatrix();
        glTranslatef (-0.2, 0.0, -0.3);
        glRotatef(30, 0,0,1);

        glRotatef(jariBw5, 0,1,0);
        glTranslatef(0.2,0,0);

        glPushMatrix();
            glScalef(0.4,0.15,0.15);
            glutWireCube(1.0);
        glPopMatrix();

        glTranslatef(0.2,0,0);
        glRotatef(jariMd5, 0,1,0);

        glTranslatef(0.1,0,0);
        glPushMatrix();
            glScalef(0.25,0.12,0.12);
            glutWireCube(1.0);
        glPopMatrix();

        glTranslatef(0.1,0,0);
        glRotatef(jariTp5, 0,1,0);

        glTranslatef(0.1,0,0);
        glPushMatrix();
            glScalef(0.2,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape (int w, int h) {
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 's': shoulder += 5; break;
    case 'S': shoulder -= 5; break;
    case 'e': elbow += 5; break;
    case 'E': elbow -= 5; break;
    case 'd': tangan += 5; break;
    case 'D': tangan -= 5; break;

    case 'r': jariBw1 += 5; break;
    case 'f': jariMd1 += 5; break;
    case 'v': jariTp1 += 5; break;

    case 't': jariBw2 += 5; break;
    case 'g': jariMd2 += 5; break;
    case 'b': jariTp2 += 5; break;

    case 'y': jariBw3 += 5; break;
    case 'h': jariMd3 += 5; break;
    case 'n': jariTp3 += 5; break;

    case 'u': jariBw4 += 5; break;
    case 'j': jariMd4 += 5; break;
    case 'm': jariTp4 += 5; break;

    case 'i': jariBw5 += 5; break;
    case 'k': jariMd5 += 5; break;
    case ',': jariTp5 += 5; break;

    case 27: exit(0);
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (700, 600);
    glutCreateWindow ("Lengan Axel-24060124140127");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
