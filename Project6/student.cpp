#include <iostream>
#include "student.h"
#include <fstream>
using namespace std;
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
//bool FindStudent(student *A_Student, long num)//寻找学生
//{
//	student temp;
//	while (A_Student != NULL)
//	{
//		if (A_Student->sID_Value() == num)
//		{
//			return true;
//		}
//		else
//			A_Student = A_Student->NEXT;
//	}
//	return false;
//}
//void AddStudent(student *A_Student, student * NewStudent)//增加新学生
//{
//	while (A_Student->NEXT != NULL)
//	{
//		A_Student = A_Student->NEXT;
//	}
//	A_Student->NEXT = NewStudent;
//	NewStudent->NEXT = NULL;
//}
//void ReduceStudent(student *A_Student,long num)//减少学生
//{
//	student *temp;
//	while (A_Student->NEXT->sID_Value() != num)
//	{
//		A_Student = A_Student->NEXT;
//	}
//	temp = A_Student->NEXT;
//	A_Student->NEXT = A_Student->NEXT->NEXT;
//	delete temp;
//}