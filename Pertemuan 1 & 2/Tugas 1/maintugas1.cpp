#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);

    // 1. GL_LINE_STRIP (Garis terbuka di kiri)
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f); // Putih
        glVertex2f(-0.9f, 0.5f); glVertex2f(-0.7f, 0.7f); glVertex2f(-0.5f, 0.5f);
    glEnd();

    // 2. GL_LINE_LOOP (Kotak tertutup di pojok)
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 0.0f); // Kuning
        glVertex2f(-0.9f, -0.9f); glVertex2f(-0.7f, -0.9f); 
        glVertex2f(-0.7f, -0.7f); glVertex2f(-0.9f, -0.7f);
    glEnd();

    // 3. GL_TRIANGLE_STRIP (Pita segitiga menyambung)
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(0.0f, 1.0f, 0.0f); // Hijau
        glVertex2f(-0.2f, 0.5f); glVertex2f(-0.2f, 0.8f);
        glVertex2f(0.1f, 0.5f);  glVertex2f(0.1f, 0.8f);
        glVertex2f(0.4f, 0.5f);
    glEnd();

    // 4. GL_TRIANGLE_FAN (Bentuk kipas/setengah lingkaran)
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f); // Merah
        glVertex2f(0.0f, 0.0f);   // Titik pusat
        glVertex2f(0.2f, 0.2f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.2f, -0.2f);
    glEnd();

    // 5. GL_QUADS (Kotak standar)
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.5f, 1.0f); // Biru
        glVertex2f(0.5f, -0.5f); glVertex2f(0.8f, -0.5f);
        glVertex2f(0.8f, -0.2f); glVertex2f(0.5f, -0.2f);
    glEnd();

    // 6. GL_QUAD_STRIP (Dua kotak menyambung)
    glBegin(GL_QUAD_STRIP);
        glColor3f(1.0f, 0.0f, 1.0f); // Magenta
        glVertex2f(-0.5f, -0.5f); glVertex2f(-0.5f, -0.2f);
        glVertex2f(-0.2f, -0.5f); glVertex2f(-0.2f, -0.2f);
        glVertex2f(0.0f, -0.5f);  glVertex2f(0.0f, -0.2f);
    glEnd();

    glFlush();
}


