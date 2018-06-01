#include <iostream>
#include  <stdlib.h>
#include "Course.h"
#include "Course_Select.h"
#include "student.h"
#include <fstream>
using namespace std;
typedef Course *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
void MainMenu();//主界面
void ListStudent(student *L);
template <class T >
T* Creat()//创建空链表
{
	T *Head = new (T);
	Head->NEXT = NULL;
	return Head;
}
int main(void)
{
	MainMenu();
	//创建链表表头
	student *S_Head;
	S_Head = Creat<student>();
	ListStudent(S_Head);
	S_Head->NEXT->Find();
	Course *C_Head;	
	C_Head = Creat<Course>();
	Course c(100, "q", 10, 10);
	C_Head->AddCourse(&c);
	C_Head->NEXT->Find();
	Course_Select *C_S_Head;
	C_S_Head = Creat<Course_Select>();
	cin.get();
	cin.get();
	return 0; 
}