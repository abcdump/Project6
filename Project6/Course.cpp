#include <iostream>
#include "Course.h"
#include <fstream>
using namespace std;
void Course::Find()//��ѯ
{
	cout << "�γ̺�:" <<  CourseID << endl
		 << "�γ�����"<< CourseName<< endl 
		 << "���пγ̺ţ�" << CourseID_Front << endl
		 << "ѧ��:" << StudyScore << endl;
}
void Course::Change()//�޸� 
{
	cout << "�γ̺�:";
	cin >> CourseID;
	cout << endl;
	cout << "�γ�����";
	cin >> CourseName;
	cout << endl;
	cout << "���пγ̺ţ�";
	cin >> CourseID_Front;
	cout << endl;
	cout << "ѧ�֣�";
	cin >> StudyScore;
	cout << endl;
}

//bool FindCourse(Course *A_Course, long num)//Ѱ�ҿγ�
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
//void AddCourse(Course *A_Course, Course * NewCourse)//�����¿γ�
//{
//	while (A_Course->NEXT != NULL)
//	{
//		A_Course = A_Course->NEXT;
//	}
//	A_Course->NEXT = NewCourse;
//	NewCourse->NEXT = NULL;
//}
//void ReduceCourse(Course *A_Course, long num)//���ٿγ�
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