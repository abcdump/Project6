#include <iostream>
#include "Course_Select.h"
#include <fstream>
using namespace std;
typedef Course_Select *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
void Course_Select::Find()//��ѯ
{
	cout << "ѧ�ţ�" << StudentID << endl
		 << "�γ̺ţ�" << CourseID << endl
		 << "�ɼ���" << score << endl;
}
void Course_Select::Change()//�޸�
{
	cout << "ѧ�ţ�";
	cin >> StudentID;
	cout << endl;
	cout << "�γ̺ţ�";
	cin >> CourseID;
	cout << endl;
	cout << "�ɼ���";
	cin >> score;
	cout << endl;
}
void Course_Select::SetValue(long a, long b , double c )//��ֵ
{
	StudentID = a;
	CourseID = b;
	score = c;
}
Course_Select *Course_Select::FindCourseSelect(long num)
{//Ѱ��ĳѧ��ѡ����Ϣ
	Position P;
	P = this->NEXT;
	while (P != NULL && P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//�������ʧ�ܷ���NULL
void Course_Select::AddCourse_Select( Course_Select * NewCourse_Select)//������ѡ�μ�¼
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
}//�����Ƿ�Ϊ��������߳�Ա�ǲ������һ��
void Course_Select::ReduceCourse( long num)//����ѡ�μ�¼
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
		else cout << "û�ҵ���ѧ����ѡ�μ�¼��" << endl;
	}
	else cout << "�Ѿ�û��ѡ�μ�¼��!" << endl;
}

