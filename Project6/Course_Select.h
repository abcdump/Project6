#pragma once
#include <string>
#include <fstream>
using namespace std;

class Course_Select
{
private:
	long StudentID;//学号
	long CourseID;//课程号
	double score;//成绩
public:
	Course_Select * NEXT;
	void ReadFile(ifstream & in) { in >> StudentID >> CourseID >> score; }//从文件输入
	void PrintFile(ofstream & out) { out << StudentID << CourseID << score << endl; }//写文件
	Course_Select(long a = 0, long b = 0, double c = 0) :StudentID(a), CourseID(b), score(c) {};//构造函数
	void SetValue(long a = 0, long b = 0, double c = 0);//赋值
	bool ID_Value() { return StudentID; }
	//返回学号的值
	Course_Select * FindCourseSelect(long num);//查找选课记录
	void AddCourse_Select( Course_Select * NewCourse_Select);//添加
	bool IsEmpty();//判断是否为空或最后一个
	void ReduceCourse( long num);//删除
	void Find();//查询
	void Change();//修改
	~Course_Select()
	{
		delete NEXT;
	}
};