#include <gl/glut.h>

void Segitiga(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        // Titik 1: Merah
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.10, -0.10, 0.00);
        
        // Titik 2: Hijau
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(0.10, -0.10, 0.00);
        
        // Titik 3: Biru
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.00, 0.10, 0.00);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Segitiga");
    
    glutDisplayFunc(Segitiga);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Latar belakang biru
    
    glutMainLoop();
    
    return 0;
}
