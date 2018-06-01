#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class student
//学生类
{
private:
	long studentID;//学号
	string name;//姓名
	string sex;//性别
	int age;//年龄
	string major;//专业
public:
	student * NEXT;
	long ID_Value() { return studentID; }//返回学号的值
	void ReadFile(ifstream & in) { in >> studentID >> name >> sex >> age >> major; }//从文件输入
	void PrintFile(ofstream & out) { out << studentID << name << sex << age << major << endl; }//写文件
	student(long a = 0, string b = "0", string c = "0", int d = 0 , string e = "0") :studentID(a), name(b), sex(c),
		age(d), major(e){}//构造函数
	student *  FindStudent(long num);//查询
	void AddStudent(student * NewCourse);//添加
	bool IsEmpty();//判断是否为空或最后一个
	void ReduceStudent(long num);//减少课程
	void Find();//查询
	void Change();//修改
	~student()
	{
		delete NEXT;
	}
};