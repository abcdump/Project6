#pragma once
#include <string>
#include <fstream>
using namespace std;
class Course
{
private:
	long CourseID;//�γ̺�
	string CourseName;//�γ���
	long CourseID_Front;//���пγ̺�
	double StudyScore;//ѧ��
	
public:
	Course *NEXT;
	long ID_Value() { return CourseID; }//���ؿγ̺ŵ�ֵ
	void ReadFile(ifstream & in) { in >> CourseID>> CourseName>> CourseID_Front >> StudyScore; }
	//���ļ�����
	void PrintFile(ofstream & out) { out << CourseID << CourseName << CourseID_Front << StudyScore; }
	//д�ļ�
	Course(long a=0, string b = "0", long c = 0 , double d = 0) :CourseID(a), CourseName(b),
	 CourseID_Front(c),StudyScore(d) {	}//���캯��

	Course *  FindCourse( long num);//��ѯ
	void AddCourse(Course * NewCourse);//���
	bool IsEmpty();//�ж��Ƿ�Ϊ�ջ����һ��
	void ReduceCourse(long num);//���ٿγ�
	void Find();//��ѯ
	void Change();//�޸�
	~Course()
	{
		delete NEXT;
	}
};