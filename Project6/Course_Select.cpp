#include <iostream>
#include "Course_Select.h"
#include <fstream>
using namespace std;
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
