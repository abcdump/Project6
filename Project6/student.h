#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class student
//ѧ����
{
private:
	long studentID;//ѧ��
	string name;//����
	string sex;//�Ա�
	int age;//����
	string major;//רҵ
public:
	student * NEXT;
	long ID_Value() { return studentID; }//����ѧ�ŵ�ֵ
	void ReadFile(ifstream & in) { in >> studentID >> name >> sex >> age >> major; }//���ļ�����
	void PrintFile(ofstream & out) { out << studentID << name << sex << age << major << endl; }//д�ļ�
	student(long a = 0, string b = "0", string c = "0", int d = 0 , string e = "0") :studentID(a), name(b), sex(c),
		age(d), major(e){}//���캯��
	void Find();//��ѯ
	void Change();//�޸�
	~student()
	{
		delete NEXT;
	}
};