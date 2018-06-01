#pragma once
#include <string>
#include <fstream>
using namespace std;

class Course_Select
{
private:
	long StudentID;//ѧ��
	long CourseID;//�γ̺�
	double score;//�ɼ�
public:
	Course_Select * NEXT;
	void ReadFile(ifstream & in) { in >> StudentID >> CourseID >> score; }//���ļ�����
	void PrintFile(ofstream & out) { out << StudentID << CourseID << score << endl; }//д�ļ�
	Course_Select(long a = 0, long b = 0, double c = 0) :StudentID(a), CourseID(b), score(c) {};//���캯��
	void SetValue(long a = 0, long b = 0, double c = 0);//��ֵ
	bool ID_Value() { return StudentID; }
	//����ѧ�ŵ�ֵ
	Course_Select * FindCourseSelect(long num);//����ѡ�μ�¼
	void AddCourse_Select( Course_Select * NewCourse_Select);//���
	bool IsEmpty();//�ж��Ƿ�Ϊ�ջ����һ��
	void ReduceCourse( long num);//ɾ��
	void Find();//��ѯ
	void Change();//�޸�
	~Course_Select()
	{
		delete NEXT;
	}
};