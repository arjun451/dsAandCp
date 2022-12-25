class Complex{
           int real;
	   int imaginery;
	public:
	      Complex(int real,int imaginery)
	      {
		      this->real = real;
		      this->imaginery = imaginery;
	      }
	      void display()
	      {
		      cout<<real<<((imaginery>=0)?" + ":" ")<<imaginery<<"i"<<endl;
	      }
	      void add(Complex const &c2)
	      {

                  real = real +c2.real;
		  imaginery = imaginery + c2.imaginery;
	      }
	      void multiply(Complex const &c2)
	      {
               int  a = real*c2.real-imaginery*c2.imaginery;
		int b = real*c2.imaginery +imaginery*c2.real;
		real = a;
		imaginery = b;

	      }


};
