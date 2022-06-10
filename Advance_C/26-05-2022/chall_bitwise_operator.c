#include <stdio.h>

long long DecimalToBinary(int n);

int main()  {

    int num1 = 0, num2 = 0;
    long long b_num1 = 0, b_num2 = 0;

    int d_num1LeftShift = 0;

    long long b_num1Complement = 0;//~num1
    long long b_num2Complement = 0;//~num2
    long long b_num1ANDnum2 = 0;// num1&num2
    long long b_num1ORnum2 = 0;// num1| num2
    long long b_num1ExORnum2 = 0;// num1 ^ num2
    long long b_num1LeftShift = 0;//num1<<2

    /* Input number from user */
    printf("Enter an integer: ");
    scanf("%d", &num1);

    /* Input bit position you want to set */
    printf("Enter another integer: ");
    scanf("%d", &num2);

    b_num1 = DecimalToBinary(num1);
    b_num2 = DecimalToBinary(num2);

    d_num1LeftShift = num1 << 2;

    b_num1Complement = DecimalToBinary(~num1);
    b_num2Complement = DecimalToBinary(~num2);
    b_num1ANDnum2 = DecimalToBinary(num1 & num2);
    b_num1ORnum2 = DecimalToBinary(num1 | num2);
    b_num1ExORnum2 = DecimalToBinary(num1 ^ num2);
    b_num1LeftShift= DecimalToBinary(num1 << 2);


    printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", num1, b_num1, b_num1Complement);
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", num2, b_num2, b_num2Complement);
    printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ANDnum2);
    printf("The result of applying the | operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ORnum2);
    printf("The result of applying the ^ operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ExORnum2);
    printf("The result of applying the left shift operator << on number %d (%lld) by 2 places is number %d (%lld)\n", num1, b_num1, d_num1LeftShift, b_num1LeftShift);

    return 0;
}

long long DecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}