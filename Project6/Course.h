#pragma once
#include <string>
#include <fstream>
using namespace std;
class Course
{
private:
	long CourseID;//课程号
	string CourseName;//课程名
	long CourseID_Front;//先行课程号
	double StudyScore;//学分
	
public:
	Course *NEXT;
	long ID_Value() { return CourseID; }//返回课程号的值
	void ReadFile(ifstream & in) { in >> CourseID>> CourseName>> CourseID_Front >> StudyScore; }
	//从文件输入
	void PrintFile(ofstream & out) { out << CourseID << CourseName << CourseID_Front << StudyScore; }
	//写文件
	Course(long a=0, string b = "0", long c = 0 , double d = 0) :CourseID(a), CourseName(b),
	 CourseID_Front(c),StudyScore(d) {	}//构造函数

	Course *  FindCourse( long num);//查询
	void AddCourse(Course * NewCourse);//添加
	bool IsEmpty();//判断是否为空或最后一个
	void ReduceCourse(long num);//减少课程
	void Find();//查询
	void Change();//修改
	~Course()
	{
		delete NEXT;
	}
};