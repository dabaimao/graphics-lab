#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <GL\glut.h>
void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);						//������ʼ����ɫ͸���ȵ���
	glMatrixMode(GL_PROJECTION);							//ͶӰģʽ
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);						//ͶӰ��Χ
}

void graph()												//�Զ���ͼ�κ���
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(100, 100);
		glVertex2i(100, 200);
		glVertex2i(200, 200);
		glVertex2i(200, 100);
	glEnd();

	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc, argv);									//��ʼ��GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);			//������ʾģʽ
	glutInitWindowPosition(800, 100);						//���ô������Ͻ�����
	glutInitWindowSize(800, 600);							//���ô��ڴ�С
	glutCreateWindow("An Opengl Test Program");				//���ñ�������

	init();													//������ʼ��
	glutDisplayFunc(graph);									//��ʾͼ��
	glutMainLoop();
	return 0;
}