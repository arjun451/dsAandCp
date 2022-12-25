class Fraction{
      int numenitor;
      int dinominetor;
  public:

      Fraction(int numenitor,int dinominetor)
      {
	      this->numenitor = numenitor;
	      this->dinominetor = dinominetor;
      }
       void display()
       {

       cout<<numenitor<<" / "<<dinominetor<<endl; 
       }
       void simplify()
       {
	       int min = (numenitor>dinominetor)?dinominetor:numenitor;
	       int gcd = 1;
	       for(int i=2;i<=min;i++)
	       {
		       if(numenitor%i==0&&dinominetor%i==0)
		       {
			       gcd = i;
		       }
	       }
	       numenitor = numenitor/gcd;
	       dinominetor = dinominetor/gcd;
       }

       void add(Fraction const &f2)
       {
        int lcm = dinominetor*f2.dinominetor;
	int num = numenitor*f2.dinominetor+f2.numenitor*dinominetor;
	numenitor = num;
	dinominetor=lcm;
	simplify();

       }
       void multiply(Fraction const &f2)
       {
	       numenitor = numenitor*f2.numenitor;
	       dinominetor = dinominetor*f2.dinominetor;
	       simplify();
       }


};
