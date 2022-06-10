#include <stdio.h>  
 
void main()  
{  
    // declaration of variables  
    int num, binary_num =0, decimal_num,i = 1, rem;  
    printf (" Enter a decimal number \n");  
    scanf (" %d", &num); 
  
    decimal_num = num; 
      
      
    while ( num !=0)  
    {  
        rem = num%2;
        num = num/2;
        binary_num = binary_num + rem *i;
        i=i*10;

    }  
  
    printf ( " The decimal number is %d \t", decimal_num);  
    printf (" \n The binary number is %d \n", binary_num);   
  
}  