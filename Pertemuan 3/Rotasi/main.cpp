#include <GL/glut.h>

float rot = 0.0f;

void drawTriangle(){
	glBegin(GL_TRIANGLES);
		glColor3f(1,0,0); glVertex2f(-0.1f,-0.1f);
		glColor3f(0,1,0); glVertex2f(0.1f,-0.1f);
		glColor3f(0,0,1); glVertex2f(0.0f,0.1f);
	glEnd();
}

void renderScene(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glPushMatrix();
		glTranslatef(0.25f,-0.25f,0.0f);
		glRotatef(rot,0.0f,0.0f,1.0f);
		drawTriangle();
	glPopMatrix();

	glFlush();
}

void inputKeyboard(unsigned char key,int x,int y){
	switch(key){
		case 'a': rot += 5.0f; break;
		case 'd': rot -= 5.0f; break;
	}
	glutPostRedisplay();
}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640,480);
	glutCreateWindow("Axel Anggian Hamonangan Purba - 24060124140127");

	glutDisplayFunc(renderScene);
	glutKeyboardFunc(inputKeyboard);

	glClearColor(0.0f,0.0f,1.0f,1.0f);

	glutMainLoop();
	return 0;
}
