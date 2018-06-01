#include <iostream>
#include "student.h"
#include <fstream>
using namespace std;
typedef student *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
void student::Find()//查询
{
	cout << "学号：" << studentID << endl
		 << "姓名：" << name << endl
		 << "性别：" << sex << endl
		 << "年龄：" << age << endl
		 << "专业：" << major << endl;
}
void student::Change()//修改
{
	cout << "学号：";
	cin >> studentID;
	cout << endl;
	cout << "姓名：";
	cin >> name;
	cout << endl;
	cout << "性别：";
	cin >> sex;
	cout << endl;
	cout << "年龄：";
	cin >> age;
	cout << endl;
	cout << "专业：";
	cin >> major;
	cout << endl;
}
student *student::FindStudent(long num)//寻找课程
{
	Position P;
	P = this->NEXT;
	while (P != NULL && P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//如果查找失败返回NULL
void student::AddStudent(student* NewStudent)//增加新课程
{
	Position P;
	P = this;
	while (P->NEXT != NULL)
	{
		P = P->NEXT;
	}
	P->NEXT = NewStudent;
	NewStudent->NEXT = NULL;
}
bool student::IsEmpty()
{
	return this->NEXT == nullptr;
}
void student::ReduceStudent(long num)//减少课程
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