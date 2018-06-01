#include <iostream>
#include "Course.h"
#include <fstream>
using namespace std;
typedef Course *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
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
Course *Course::FindCourse( long num)//Ѱ�ҿγ�
{
	Position P;
	P = this->NEXT;
	while (P != NULL&& P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//�������ʧ�ܷ���NULL
void Course::AddCourse(Course * NewCourse)//�����¿γ�
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
void Course::ReduceCourse(long num)//���ٿγ�
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
		else cout << "û�ҵ����ſγ̣�" << endl;
	}
	else cout << "�Ѿ�û�пγ̿���ɾ����!" << endl;
}