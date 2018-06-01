#include <iostream>
#include "Course_Select.h"
#include <fstream>
using namespace std;
void Course_Select::Find()//查询
{
	cout << "学号：" << StudentID << endl
		 << "课程号：" << CourseID << endl
		 << "成绩：" << score << endl;
}
void Course_Select::Change()//修改
{
	cout << "学号：";
	cin >> StudentID;
	cout << endl;
	cout << "课程号：";
	cin >> CourseID;
	cout << endl;
	cout << "成绩：";
	cin >> score;
	cout << endl;
}
void Course_Select::SetValue(long a, long b , double c )//赋值
{
	StudentID = a;
	CourseID = b;
	score = c;
}
