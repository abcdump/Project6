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
void StudentMenu()// ѧ���˵�
{
	cout << "1��ѡ��" << endl
		 << "2�����˻�����Ϣ��ѯ" << endl
		 << "3����ѯ���Գɼ�" << endl
		 << "4��ѡ����Ϣ��ѯ" << endl
		 << "5���γ���Ϣ��ѯ" << endl
		 << "6��������һ���˵�" << endl;
}
void TeacherMenu()//��ʦ�˵�
{
	cout << "1����ѯ�ɼ���" << endl
		 << "2����ѯͬרҵѧ��" << endl
		 << "3����ѯ���п�" << endl
		 << "4����ѯ�ҿ�����" << endl
		 << "5��������һ���˵�" << endl;
}
void MainMenu()//������
{
	cout << "	     ��ӭ����ѡ��ϵͳ��" << endl
		 << "			1��ѧ����½" << endl
		 << "			2����ʦ��½" << endl
		 << "           0���˳�ϵͳ" << endl;
}
void ListStudent(student *L)
{
	ifstream in;
	in.open("ѧ��.txt");
	//ofstream out;
	student *temp = new (student);
	while (!in.eof())
	{
		temp->ReadFile(in);
		L->AddStudent(temp);
	}
	in.close();
}

