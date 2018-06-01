#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Course.h"
#include "Course_Select.h"
#include "student.h"
using namespace std;
void SelectCourse(student a,Course b,Course_Select c)//选课
{
	c.SetValue(a.ID_Value(), b.ID_Value());
}
void StudentMenu()// 学生菜单
{
	cout << "1、选课" << endl
		 << "2、个人基本信息查询" << endl
		 << "3、查询考试成绩" << endl
		 << "4、选课信息查询" << endl
		 << "5、课程信息查询" << endl
		 << "6、返回上一级菜单" << endl;
}
void TeacherMenu()//教师菜单
{
	cout << "1、查询成绩单" << endl
		 << "2、查询同专业学生" << endl
		 << "3、查询先行课" << endl
		 << "4、查询挂科名单" << endl
		 << "5、返回上一级菜单" << endl;
}
void MainMenu()//主界面
{
	cout << "	     欢迎进入选课系统！" << endl
		 << "			1、学生登陆" << endl
		 << "			2、教师登陆" << endl
		 << "           0、退出系统" << endl;
}
void ListStudent(student *L)
{
	ifstream in;
	in.open("学生.txt");
	//ofstream out;
	student *temp = new (student);
	while (!in.eof())
	{
		temp->ReadFile(in);
		L->AddStudent(temp);
	}
	in.close();
}

