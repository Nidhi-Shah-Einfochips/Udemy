/*
Author : Nidhi Shah
Course Name : Complete Modern C++ (C++11/14/17)
Code Title : This program is for function and pointer
*/
#include<iostream>
using namespace std;
int Add(int *a,int *b)  //Add two numbers and return the sum
{
	int sum=0;
	sum = *a + *b;
	return sum;
}
int AddVal(int *a, int *b, int *result) //Add two numbers and return 
{
	*result = *a + *b;
	return *result;
}
void Swap(int *a, int *b) //Swap the value of two integers
{
	int temp;
  	temp = *a;
  	*a = *b;
  	*b = temp;

}
int Factorial(int *a, int *result) //Generate the factorial of a number and return 
{
	int i;
	*result =1;
	for(i=1;i<=*a;i++)
		*result=*result*i;
	return *result;
}
int main()
{
    int num1, num2,result=0; 
    int Addition;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2; // Two numbers input
    //ptr1 = &num1;
    //ptr2 = &num2;
    Addition=Add(&num1,&num2); // Calling function Add
    cout<<"\nSum of Two Numbers = "<<Addition;
    cout<<endl;
    cout<<"Addition with third pointer "<<AddVal(&num1,&num2,&result)<<endl; // Calling function AddVal
    cout<<"before swapping"<<endl;
    cout<<"number1: "<<num1<<" number2: "<<num2<<endl;   	
    Swap(&num1, &num2); // Calling function Swap
    cout<<"After swapping"<<endl;
    cout<<"number1: "<<num1<<" number2: "<<num2<<endl;
    result=0;
    cout<<"Factorial of a "<<Factorial(&num1,&result)<<endl; // Calling function factorial
    cout<<endl;
    return 0;
}


