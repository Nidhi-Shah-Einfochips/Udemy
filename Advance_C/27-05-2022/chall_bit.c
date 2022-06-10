#include <stdio.h>

int main() {
    int num, pos, newnum, bitStatus;

    
    printf("Enter any number: ");
    scanf("%d", &num);

   
    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &pos);

    
    bitStatus = (num >> pos) & 1;
    printf("The %d bit is set to %d\n", pos, bitStatus);

    
    newnum = (1 << pos) | num;
    

    printf("Number before setting %d bit: %d \n", pos, num);
    printf("Number after setting %d bit: %d \n", pos, newnum);

    return 0;
}