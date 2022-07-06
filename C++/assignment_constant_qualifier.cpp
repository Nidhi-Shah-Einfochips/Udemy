/*
Author : Nidhi Shah
Course Name : Complete Modern C++ (C++11/14/17)
Code Title : constant qualifier
*/
#include<iostream>
using namespace std;
int main()
{
    //Try to modify x1 & x2 and see the compilation output
int x = 5 ;
const int MAX = 12 ;
int &ref_x1 = x ;
int &ref_x2 = x ;
cout<<ref_x1<<endl;
cout<<ref_x2<<endl;


 
//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
const int *ptr1 = &x ;
int *const ptr2 = &x ;
const int * const ptr3 = &x ;
cout<<ptr1<<endl;
cout<<ptr2<<endl;
cout<<ptr3<<endl;
 
//Find which declarations are valid. If invalid, correct the declaration
// all the declaration where invalid
/*
const int *ptr3 = &MAX ;
int *ptr4 = &MAX ;
 
const int &r1 = ref_x1 ;
int &r2 = ref_x2 ;
 
int *&p_ref1 = ptr1 ;
const int*&p_ref2 = ptr2 ;
*/
//const int *const ptr3 = &MAX ;
const int *ptr4 = &MAX ;
 
const int &r1 = ref_x1 ;
const int &r2 = ref_x2 ;
 
const int *&p_ref1 = ptr1 ;
int *const &p_ref2 = ptr2 ;
}