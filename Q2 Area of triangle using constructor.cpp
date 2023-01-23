// Q2 Program to find area of triangle using constructor.
#include<iostream>
using namespace std;
class construct
{
	public:
		float area;
		construct(int b, int h)
		{
			cout<<"The area of triangle is : "<<endl;
			area=(b*h)/2;
		}
		void disp()
		{
			cout<<area<<endl;
		}
};

int main()
{
	construct o(10,20);
	o.disp();
	return 0;
}

