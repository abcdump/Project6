#include <iostream>
#include "Course.h"
#include <fstream>
using namespace std;
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

//bool FindCourse(Course *A_Course, long num)//寻找课程
//{
//	Course temp;
//	while (A_Course != NULL)
//	{
//		if (A_Course->cID_Value() == num)
//		{
//			return true;
//		}
//		else
//			A_Course = A_Course->NEXT;
//	}
//	return false;
//}
//void AddCourse(Course *A_Course, Course * NewCourse)//增加新课程
//{
//	while (A_Course->NEXT != NULL)
//	{
//		A_Course = A_Course->NEXT;
//	}
//	A_Course->NEXT = NewCourse;
//	NewCourse->NEXT = NULL;
//}
//void ReduceCourse(Course *A_Course, long num)//减少课程
//{
//	Course *temp;
//	while (A_Course->NEXT->cID_Value() != num)
//	{
//		A_Course = A_Course->NEXT;
//	}
//	temp = A_Course->NEXT;
//	A_Course->NEXT = A_Course->NEXT->NEXT;
//	delete temp;
//}