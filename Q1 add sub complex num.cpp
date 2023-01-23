// Q1 write a program to add and sub two complex numbers
#include<iostream>
using namespace std;
class complex
{
	private :
		int real, imag;
		public:
			complex(int r=0, int i=0)
			{
				real =r;
				imag =i;
			}
			void setcomplex(void)
			{
				cin>>this->real >> real >>this->imag;
			}
			complex add(const complex& c)
			{
				complex comp;
				comp.real=this->real+c.real;
				comp.imag= this->imag+c.imag;
				return comp;
			}
			complex subtract(const complex& c)
			{
				complex comp;
				comp.real=this->real+c.real;
				comp.imag=this->imag+c.imag;
				return comp;
			}
			void printcomplex(void)
			{
				cout<<this->real<<" "<<this->imag<<endl;
				
			}
};

int main()
{
	complex o1,q2,o3;
	o1.getval(5,2);
	o2.getval(4,5);
	o3=o1+o2;
	return o3;
}
