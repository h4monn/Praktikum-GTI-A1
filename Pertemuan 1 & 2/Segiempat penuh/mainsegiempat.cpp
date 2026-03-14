#include <gl/glut.h>

void SegiEmpat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Mengatur warna segiempat (Merah)
    glColor3f(1.0f, 0.0f, 0.0f);
    
    // Menggambar segiempat penuh: glRectf(x1, y1, x2, y2)
    glRectf(-0.18, 0.18, 0.18, -0.18);
    
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    
    glutCreateWindow("Segi Empat");
    
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Latar belakang biru
    
    glutMainLoop();
    
    return 0;
}
