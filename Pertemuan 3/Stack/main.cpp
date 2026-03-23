#include <GL/glut.h> />
#include <cmath>     

float rotAngle = 0.0f; 

void drawLine(){ 
	glLineWidth(2.0f);
	glBegin(GL_LINES);
		glColor3f(1,1,1);
		glVertex2f(0.0f,0.2f);   
		glVertex2f(0.0f,-0.2f);
	glEnd();
}

void drawPoint(){ 
	glPointSize(5.0f);
	glBegin(GL_POINTS);
		glColor3f(1,1,1);
		glVertex2f(0.60f,0.60f); 
	glEnd();
}

void drawSquare(){ 
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1,0,0); glVertex2f(0.45f,0.45f);
		glColor3f(0,1,0); glVertex2f(0.65f,0.45f);
		glColor3f(0,0,1); glVertex2f(0.45f,0.55f);
		glColor3f(1,1,0); glVertex2f(0.65f,0.55f);
	glEnd();
}

void drawCircle(){ 
	const float PI = 3.1415926f; 
	int segments = 100;          

	glBegin(GL_LINE_LOOP);
	for(int i=0;i<segments;i++){ 
		float theta = 2 * PI * i / segments;
		glVertex2f(cos(theta), sin(theta));
	}
	glEnd();
}

void render(){ 
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); 

	// garis
	glPushMatrix();
		glRotatef(rotAngle,0,0,1);
		drawLine();
	glPopMatrix();

	// titik
	glPushMatrix();
		glRotatef(rotAngle,0,0,1);
		drawPoint();
	glPopMatrix();

	// persegi
	glPushMatrix();
		glRotatef(rotAngle,0,0,1);
		drawSquare();
	glPopMatrix();

	// lingkaran 
	drawCircle();

	glFlush();
}

void keyInput(unsigned char key, int x, int y){ 
	switch(key){ 
		case 'q': rotAngle += 5; break;
		case 'e': rotAngle -= 5; break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv){ 
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(640,480);
	glutCreateWindow("Axel Anggian Hamonangan Purba - 24060124140127"); 

	glutDisplayFunc(render); 
	glutKeyboardFunc(keyInput); 

	glClearColor(0.0f,0.0f,1.0f,1.0f);

	glutMainLoop();
	return 0;
}
