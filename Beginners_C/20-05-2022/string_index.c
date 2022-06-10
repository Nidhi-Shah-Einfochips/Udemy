/*
Nidhi Shah
In c there is no string type.
String is terminatted with null character
here is conecpt of it after good bye there is null char so world has not been printed in output
*/
#include <stdio.h>
#include<string.h>

char str1[] = "Hello";
char str2[] = "Goodbye\0 world";

void showstring(char *str) {
	int i;
	int len = strlen(str);
	printf("Length of %s is %d.\n", str, len);
	for (i = 0; i <= len; i++) {
		if (str[i] == '\0') {
			printf("char[%d] = NULL\n", i);
		} else {
			printf("char[%d] = %c\n", i, str[i]);
		}
	}
}

int main() 
{
	showstring(str1);
	showstring(str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}
/*
OutPUT:
Length of Hello is 5.
char[0] = H
char[1] = e
char[2] = l
char[3] = l
char[4] = o
char[5] = NULL
Length of Goodbye is 7.
char[0] = G
char[1] = o
char[2] = o
char[3] = d
char[4] = b
char[5] = y
char[6] = e
char[7] = NULL
Hello
Goodbye
*/
