#include <iostream>
#include  <stdlib.h>
#include "Course.h"
#include "Course_Select.h"
#include "student.h"
#include <fstream>
using namespace std;
//bool findstudent(student *somebody, long num);
template <class T>
bool Find(T *A_T, long num)//Ѱ��
{
	T temp;
	while (A_T != NULL)
	{
		if (A_T->ID_Value() == num)
		{
			return true;
		}
		else
			A_T = A_T->NEXT;
	}
	return false;
}
template <class T>
void Add(T *A_T, T * NewT)//����
{
	while (A_T->NEXT != NULL)
	{
		A_T = A_T->NEXT;
	}
	A_T->NEXT = NewT;
	NewT->NEXT = NULL;
}
template <class T>
void Reduce(T *A_T, long num)//����
{
	T *temp;
	while (A_T->NEXT->ID_Value() != num)
	{
		A_T = A_T->NEXT;
	}
	temp = A_T->NEXT;
	A_T->NEXT = A_T->NEXT->NEXT;
	delete temp;
}
int main(void)
{
	ifstream in;
	in.open("�γ�.txt");
	Course a;
	a.ReadFile(in);
	a.Find();
	
	student *c = new(student);
	Find(c, 001);
//	FindStudent(c,001);
	cin.get();
	cin.get();
	return 0;
}