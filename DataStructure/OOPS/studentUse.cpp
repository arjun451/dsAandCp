#include<iostream>
using namespace std;
#include "student.cpp"
int main()
{

	//copy assignment operator
	Student s1(1,20);
	Student s2(2,25);
	     s1=s2;
        Student *s3 = new Student(3,22);
	Student s4(*s3);
	Student *s5 = new Student(*s3);
	Student *s6 = new Student(s2);
	s1.display();
	s2.display();
	s6->display();
	s4.display();
	s5->display();
	/*
	//copy constructor
	Student s1(1,20);
	Student s2(s1);
	s1.display();
	s2.display();
	Student *s3 = new Student(s1);
	s3->display();
	*/

/*	Student s1(20);
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
      */
}

