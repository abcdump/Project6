#include <iostream>
#include "Course.h"
#include <fstream>
using namespace std;
typedef Course *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
void Course::Find()//查询
{
	cout << "课程号:" <<  CourseID << endl
		 << "课程名："<< CourseName<< endl 
		 << "先行课程号：" << CourseID_Front << endl
		 << "学分:" << StudyScore << endl;
}
void Course::Change()//修改 
{
	cout << "课程号:";
	cin >> CourseID;
	cout << endl;
	cout << "课程名：";
	cin >> CourseName;
	cout << endl;
	cout << "先行课程号：";
	cin >> CourseID_Front;
	cout << endl;
	cout << "学分：";
	cin >> StudyScore;
	cout << endl;
}
Course *Course::FindCourse( long num)//寻找课程
{
	Position P;
	P = this->NEXT;
	while (P != NULL&& P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//如果查找失败返回NULL
void Course::AddCourse(Course * NewCourse)//增加新课程
{
	Position P;
	P = this;
	while (P->NEXT != NULL)
	{
		P = P->NEXT;
	}
	P->NEXT = NewCourse;
	NewCourse->NEXT = NULL;
}
bool Course::IsEmpty()
{
	return this->NEXT == nullptr;
}
void Course::ReduceCourse(long num)//减少课程
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
		else cout << "没找到这门课程！" << endl;
	}
	else cout << "已经没有课程可以删除了!" << endl;
}