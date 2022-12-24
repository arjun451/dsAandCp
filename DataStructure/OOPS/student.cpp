class Student{
	public :
                int rollnum;
	private :
                int age ;

	public :
                void display()
		{
			cout<<"(rollnumber,age): "<<rollnum<<","<<age<<endl;
		}
		int getAge()
		{
			return age;
		}
		void setAge(int a)
		{
			age = a;
		}



};

