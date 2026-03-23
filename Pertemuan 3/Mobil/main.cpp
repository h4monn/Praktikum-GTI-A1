#include <GL/glut.h>
#include <cmath>

float posX = 0.0f;
float rotWheel = 0.0f;

void drawCarBody(){
    glColor3f(0.0f,0.6f,0.2f);

    glBegin(GL_POLYGON);
        glVertex2f(-0.224, 0.172);
        glVertex2f(-0.165, 0.209);
        glVertex2f(0.01, 0.209);
        glVertex2f(0.307, 0.339);
        glVertex2f(0.462, 0.319);
        glVertex2f(0.557, 0.269);
        glVertex2f(0.660, 0.265);
        glVertex2f(0.694, 0.204);
        glVertex2f(0.694, 0.146);
        glVertex2f(0.712,0.112);
        glVertex2f(0.702,0.079);
        glVertex2f(0.595,0.077);
        glVertex2f(-0.123,0.079);
        glVertex2f(-0.179,0.087);
    glEnd();

    glColor3f(0.0f,0.4f,0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.224, 0.172);
        glVertex2f(-0.165, 0.209);
        glVertex2f(0.01, 0.209);
        glVertex2f(0.307, 0.339);
        glVertex2f(0.462, 0.319);
        glVertex2f(0.557, 0.269);
        glVertex2f(0.660, 0.265);
        glVertex2f(0.694, 0.204);
        glVertex2f(0.694, 0.146);
        glVertex2f(0.712,0.112);
        glVertex2f(0.702,0.079);
        glVertex2f(0.595,0.077);
        glVertex2f(-0.123,0.079);
        glVertex2f(-0.179,0.087);
    glEnd();
}

void drawWheel(){
    const float PI = 3.1415926f;
    float r = 0.08f;

    glColor3f(0,0,0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<100;i++){
        float t = 2*PI*i/100;
        glVertex2f(r*cos(t), r*sin(t));
    }
    glEnd();
}

void drawRim(){
    const float PI = 3.1415926f;
    float r = 0.075f;

    glColor3f(0.8f,0.8f,0.8f);
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++){
        float t = 2*PI*i/100;
        glVertex2f(r*cos(t), r*sin(t));
    }
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(-r,0); glVertex2f(r,0);
        glVertex2f(0,-r); glVertex2f(0,r);
        glVertex2f(-r*0.7,-r*0.7); glVertex2f(r*0.7,r*0.7);
        glVertex2f(-r*0.7,r*0.7); glVertex2f(r*0.7,-r*0.7);
    glEnd();
}

void drawWindow(){
    glColor3f(0.1f,0.1f,0.6f);
    glBegin(GL_POLYGON);
        glVertex2f(0.020, 0.231);
        glVertex2f(0.055, 0.267);
        glVertex2f(0.164, 0.316);
        glVertex2f(0.278, 0.327);
        glVertex2f(0.265, 0.233);
    glEnd();
}

void renderScene(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
        glTranslatef(posX,0,0);

        glPushMatrix();
            glTranslatef(-0.2f,-0.2f,0);
            drawCarBody();
            drawWindow();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-0.2f,-0.12f,0);
            glRotatef(rotWheel,0,0,1);
            drawWheel();
            drawRim();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.3f,-0.12f,0);
            glRotatef(rotWheel,0,0,1);
            drawWheel();
            drawRim();
        glPopMatrix();

    glPopMatrix();

    glFlush();
}

void animasi(){
    posX -= 0.002f;
    rotWheel -= 2.0f;

    if(posX < -1.2f)
        posX = 1.2f;

    glutPostRedisplay();
}

void setup(){
    glClearColor(1,1,1,1);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("Axel Anggian Hamonangan Purba");

    setup();
    glutDisplayFunc(renderScene);
    glutIdleFunc(animasi);

    glutMainLoop();
    return 0;
}
