#include<iostream>
using namespace std;
#include "student.cpp"
int main()
{
	Student s1(20);
	cout<<"address of s1: "<<&s1<<endl;
//	s1.setAge(24);
	s1.rollnum = 1;
	cout<<"s1.age=>"<<s1.getAge()<<", s1.rollnum=> " <<s1.rollnum<<endl;
      //  s1.display();
	Student s2(3,22),s3(4,25);
	s2.display();
	s3.display();
	Student *s4 = new Student;
	(*s4).setAge(22); 
	s4->rollnum=2;
	 cout<<"s4.age=>"<<(*s4).getAge()<<" s4.rollnum=> " <<s4->rollnum<<endl;
      //   s4->display();
}

