#include<iostream>
using namespace std;
#include "student.cpp"
int main()
{
	Student s1;
	s1.age = 24;
	s1.rollnum = 1;
	cout<<"s1.age=>"<<s1.age<<" s1.rollnum=> " <<s1.rollnum<<endl;
	Student s2,s3;
	Student *s4 = new Student;
	(*s4).age = 20;
	s4->rollnum=54;
	 cout<<"s4.age=>"<<(*s4).age<<" s4.rollnum=> " <<s4->rollnum<<endl;

}

