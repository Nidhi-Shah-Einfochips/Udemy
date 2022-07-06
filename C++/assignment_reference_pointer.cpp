/*
Author : Nidhi Shah
Course Name : Complete Modern C++ (C++11/14/17)
Code Title : Reference parameter
*/
#include<iostream>
using namespace std;
int Add(int a,int b, int &result)     //Add two numbers and return the result through a reference parameter
{
	result = a + b;
	return result;
}
int Factorial(int a, int &result)     //Find factorial of a number and return that through a reference parameter
{
	int i;
	result =1;
	for(i=1;i<=a;i++)
		result=result*i;
	return result;
}
void Swap(int &a, int &b)             //Swap two numbers through reference arguments
{
	int temp;
  	temp = a;
  	a = b;
  	b = temp;
}
int main()
{
	int num1,num2,result=0;
	cout<<"Enter Two Numbers: ";
    	cin>>num1>>num2; // Two numbers input
    	cout<<"\nSum of Two Numbers = "<<Add(num1,num2,result);// Calling function Add
    	cout<<endl;
    	result=0;
    	cout<<"Factorial of a "<<Factorial(num1,result)<<endl; // Calling function factorial
    	cout<<"before swapping"<<endl;
    	cout<<"number1: "<<num1<<" number2: "<<num2<<endl;   	
    	Swap(num1, num2); // Calling function Swap
    	cout<<"After swapping"<<endl;
    	cout<<"number1: "<<num1<<" number2: "<<num2<<endl;
    	return 0;
}
