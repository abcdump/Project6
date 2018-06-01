#include <iostream>
#include "Course_Select.h"
#include <fstream>
using namespace std;
typedef Course_Select *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
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
Course_Select *Course_Select::FindCourseSelect(long num)
{//寻找某学生选课信息
	Position P;
	P = this->NEXT;
	while (P != NULL && P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//如果查找失败返回NULL
void Course_Select::AddCourse_Select( Course_Select * NewCourse_Select)//增加新选课记录
{
	Position P;
	P = this;
	while (P->NEXT != NULL)
	{
		P = P->NEXT;
	}
	P->NEXT = NewCourse_Select;
	NewCourse_Select->NEXT = NULL;
}
bool Course_Select::IsEmpty()
{
	return this->NEXT == nullptr;
}//测试是否为空链表或者成员是不是最后一个
void Course_Select::ReduceCourse( long num)//减少选课记录
{
	if (!this->IsEmpty())
	{
		Position P;
		Position temp;
		P = this;
		while (P->NEXT->ID_Value() != num)
		{
			P = P->NEXT;
		}
		if (!P->IsEmpty())
		{
			temp = P->NEXT;
			P->NEXT = P->NEXT->NEXT;
			delete temp;
		}
		else cout << "没找到该学生的选课记录！" << endl;
	}
	else cout << "已经没有选课记录了!" << endl;
}

