#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <GL\glut.h>
void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);						//背景初始化颜色透明度调整
	glMatrixMode(GL_PROJECTION);							//投影模式
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);						//投影范围
}

void graph()												//自定义图形函数
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
	glutInit(&argc, argv);									//初始化GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);			//设置显示模式
	glutInitWindowPosition(800, 100);						//设置窗口左上角坐标
	glutInitWindowSize(800, 600);							//设置窗口大小
	glutCreateWindow("An Opengl Test Program");				//设置标题名字

	init();													//背景初始化
	glutDisplayFunc(graph);									//显示图形
	glutMainLoop();
	return 0;
}