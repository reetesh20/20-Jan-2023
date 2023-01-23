//Q4
#include<iostream>
using namespace std;
void fun(int a)
	{
		cout<<"age is "<<a<<endl;
	}
void fun(double b)
	{
	cout<<"height is "<<b<<endl;
	}
	
int main()
{
	int age;
	double height;
	cout<<"enter age of naliah ";
	cin>>age;
	cout<<"\n enter height of naliah ";
	cin>>height;
	fun(age);
	fun(height);
}
