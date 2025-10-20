////////////////////////////////////////////////////          
// experimentLines.cpp
// (modifying square.cpp)
// 
// Sumanta Guha.
////////////////////////////////////////////////////

//#include <GL/glew.h>
#include <GL/freeglut.h> 

// Drawing routine.
void drawScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	GLint k;
	GLubyte texline[20];
	GLubyte texline2[20];//YEŞİL-MAVİ-YEŞİL-KIRMIZI-YEŞİL
	for (k = 0; k <= 4; k = k + 2) {
		texline[4 * k] = 0;//Red
		texline[4 * k + 1] = 255;//GREEN
		texline[4 * k + 2] = 0;//B
		texline[4 * k + 3] = 255;
		texline2[4 * k] = 0;//Red
		texline2[4 * k + 1] = 255;//GREEN
		texline2[4 * k + 2] = 0;//B
		texline2[4 * k + 3] = 255;
	}
	for (k = 1; k <= 3; k = k + 2) {
		texline[4 * k] = 255;//Red
		texline[4 * k + 1] = 0;//GREEN
		texline[4 * k + 2] = 0;//B
		texline[4 * k + 3] = 255;
	}
	k = 3;
	texline2[4 * k] = 255;//Red
	texline2[4 * k + 1] = 0;//GREEN
	texline2[4 * k + 2] = 0;//B
	texline2[4 * k + 3] = 255;
	k = 1;
	texline2[4 * k] = 0;//Red
	texline2[4 * k + 1] = 0;//GREEN
	texline2[4 * k + 2] = 255;//B
	texline2[4 * k + 3] = 255;

	glColor3f(1.0, 1.0, 1.0);
	glBindTexture(GL_TEXTURE_1D, texline2[0]);

	glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage1D(GL_TEXTURE_1D, 0, GL_RGBA, 5, 0, GL_RGBA, GL_UNSIGNED_BYTE, texline2);
	glEnable(GL_TEXTURE_1D);

	// Draw lines.
	glLineWidth(8.0); // Default line width.
	//glBegin(GL_LINES);
	
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_LINE_LOOP);
	glTexCoord1f(1.0);
	glVertex3f(20.0, 20.0, 0.0);
	glTexCoord1f(2.0);
	glVertex3f(80.0, 20.0, 0.0);

	glTexCoord1f(0.0);
	glVertex3f(80.0, 80.0, 0.0);
	glTexCoord1f(2.0);
	glVertex3f(20.0, 80.0, 0.0);
	glTexCoord1f(0.0);
	glVertex3f(20.0, 20.0, 0.0);
	//glVertex3f(80.0, 80.0, 0.0);
	//glVertex3f(20.0, 80.0, 0.0);
	glEnd();

	glFlush();
	glDisable(GL_TEXTURE_1D);
}

// Initialization routine.
void setup(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
}

// OpenGL window reshape routine.
void resize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

// Keyboard input processing routine.
void keyInput(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

// Main routine.
int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("experimentLines.cpp");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	//	glewExperimental = GL_TRUE;
	//	glewInit();

	setup();

	glutMainLoop();
}
