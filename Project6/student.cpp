#include <iostream>
#include "student.h"
#include <fstream>
using namespace std;
typedef student *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
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
student *student::FindStudent(long num)//Ѱ�ҿγ�
{
	Position P;
	P = this->NEXT;
	while (P != NULL && P->ID_Value() != num)
	{
		P = P->NEXT;
	}
	return P;
}//�������ʧ�ܷ���NULL
void student::AddStudent(student* NewStudent)//�����¿γ�
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
void student::ReduceStudent(long num)//���ٿγ�
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