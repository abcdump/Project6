#include <iostream>
#include "student.h"
#include <fstream>
using namespace std;
void student::Find()//��ѯ
{
	cout << "ѧ�ţ�" << studentID << endl
		 << "������" << name << endl
		 << "�Ա�" << sex << endl
		 << "���䣺" << age << endl
		 << "רҵ��" << major << endl;
}
void student::Change()//�޸�
{
	cout << "ѧ�ţ�";
	cin >> studentID;
	cout << endl;
	cout << "������";
	cin >> name;
	cout << endl;
	cout << "�Ա�";
	cin >> sex;
	cout << endl;
	cout << "���䣺";
	cin >> age;
	cout << endl;
	cout << "רҵ��";
	cin >> major;
	cout << endl;
}
//bool FindStudent(student *A_Student, long num)//Ѱ��ѧ��
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
//void AddStudent(student *A_Student, student * NewStudent)//������ѧ��
//{
//	while (A_Student->NEXT != NULL)
//	{
//		A_Student = A_Student->NEXT;
//	}
//	A_Student->NEXT = NewStudent;
//	NewStudent->NEXT = NULL;
//}
//void ReduceStudent(student *A_Student,long num)//����ѧ��
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