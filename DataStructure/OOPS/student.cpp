class Student{
	public :
                int rollnum;
	private :
                int age ;

	public :
		//default constructor
		Student()
		{
			cout<<"Default constructor called!"<<endl;
		}
       
		//parameterised constructor
		Student(int age)
		{
			cout<<"Parameterised constructor called!"<<endl;
			cout<<"this "<<this<<endl;
		      ( *this).age = age;
		}
		 Student(int a,int r)
                {
                        cout<<"Parameterised constructor 2 called!"<<endl;
                        age = a;
			rollnum =r;
                }
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

