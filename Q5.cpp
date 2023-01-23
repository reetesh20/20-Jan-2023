//Q5 MNC Company
#include<iostream>
using namespace std;
int main()
{
	float numerator,denominator;
	double result;
	again:cout<<"enter numerator ";
	cin>>numerator;
	cout<<"\n denominator ";
	cin>>denominator;
	try// write the code in this block which can cause exception
	{
	if(denominator!=0)
	{
		result=numerator/denominator;
		cout<<result;
	}
	else
		throw (denominator);//throwing the exception
	}
	catch(float i)//this will catch the exception
	{
		cout<<"exception caught denominator="<<denominator;
		cout<<"\nenter the values again\n";
		goto again;
	}


}
