#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Course.h"
#include "Course_Select.h"
#include "student.h"
using namespace std;
void SelectCourse(student a,Course b,Course_Select c)//ѡ��
{
	c.SetValue(a.ID_Value(), b.ID_Value());
}
//template <class T>
//bool Find(T *A_T, long num)//Ѱ�ҿγ�
//{
//	T temp;
//	while (A_T != NULL)
//	{
//		if (A_T->cID_Value() == num)
//		{
//			return true;
//		}
//		else
//			A_T = A_T->NEXT;
//	}
//	return false;
//}
//template <class T>
//void Add(T *A_T, T * NewT)//�����¿γ�
//{
//	while (A_T->NEXT != NULL)
//	{
//		A_T = A_T->NEXT;
//	}
//	A_T->NEXT = NewT;
//	NewT->NEXT = NULL;
//}
//template <class T>
//void Reduce(T *A_T, long num)//���ٿγ�
//{
//	T *temp;
//	while (A_T->NEXT->cID_Value() != num)
//	{
//		A_T = A_T->NEXT;
//	}
//	temp = A_T->NEXT;
//	A_T->NEXT = A_T->NEXT->NEXT;
//	delete temp;
//}