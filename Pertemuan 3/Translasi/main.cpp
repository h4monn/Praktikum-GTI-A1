#include <GL/glut.h> 
#include <cmath>

float xPos = 0.0f, yPos = 0.0f; 

void drawSquare(){ 
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.18f,0.18f,0.18f,-0.18f);
}

void render(){ 
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); 

	glPushMatrix();
		glTranslatef(0.50f,0.50f,0.0f); 
		glTranslatef(xPos,yPos,0.0f);   
		drawSquare(); 
	glPopMatrix();

	glFlush();
}

void keyControl(unsigned char key,int x,int y){ 
	switch(key){ 
		case 'w': yPos += 0.05f; break;
		case 's': yPos -= 0.05f; break;
		case 'a': xPos -= 0.05f; break;
		case 'd': xPos += 0.05f; break;
	}
	glutPostRedisplay();
}

void setup(){ 
	glClearColor(1,1,1,1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1,1,-1,1);
}

int main(int argc,char** argv){ 
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(640,480);
	glutCreateWindow("Axel Anggian Hamonangan Purba - 24060124140127"); 

	setup(); 
	glutDisplayFunc(render); 
	glutKeyboardFunc(keyControl); 

	glutMainLoop();
	return 0;
}
