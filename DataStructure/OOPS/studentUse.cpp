#include<iostream>
using namespace std;
#include "student.cpp"
int main()
{
	Student s1;
	s1.setAge(24);
	s1.rollnum = 1;
	cout<<"s1.age=>"<<s1.getAge()<<", s1.rollnum=> " <<s1.rollnum<<endl;
      //  s1.display();
	Student s2,s3;
	Student *s4 = new Student;
	(*s4).setAge(22); 
	s4->rollnum=2;
	 cout<<"s4.age=>"<<(*s4).getAge()<<" s4.rollnum=> " <<s4->rollnum<<endl;
      //   s4->display();
}

