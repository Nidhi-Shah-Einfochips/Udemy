// _CRT_SECURE_NO_WARNINGS is required to stop the Microsoft compiler complaining
// about the use of unsafe functions. 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <malloc.h>


#define MAXSTRLEN 100

char greeting[MAXSTRLEN];

char * string_function_dynamic(char *astring) {
	char *s;
	s = (char*)malloc(MAXSTRLEN);	// The cast (char*) may be needed by some compilers
	s[0] = 0;						// need this to initialize the buffer created by malloc
	strcat(s, "hello ");
	//		With the Microsoft Compiler, strcat_s is the preferred 'safe' alternative to
	//		strcat (see example below) but this function is not supported by all C compilers
	// strcat_s(s, MAXSTRLEN, "hello ");
	strcat(s, astring);
	strcat(s, "\n");
	return s;
}

char * string_function(char astring[]) {
	strcat(greeting, "hello ");
	strcat(greeting, astring);
	strcat(greeting, "\n");
	return greeting;
}

int main(int argc, char **argv) {
	printf(string_function("Fred"));
	printf(string_function_dynamic("Mary"));
	return 0;
}
