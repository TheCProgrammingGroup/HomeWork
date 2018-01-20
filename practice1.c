/**
 *	This is your second homework, you need to design an algorithm
 *	to caculate how many characters in a string.Give you a hint
 *	:in c the string is ended by a '\0'.Do not use strlen function
 *	in c library.
 *
 *
 */

#include <stdio.h>
int Mystrlen(char* arr){
}

int main(int argc, char** argv){
	printf("I will test your strlen function..\n");
	char *input = "12345678";
	if(Mystrlen(input) != 8){
		printf("Your function is not fit out requirement,please check you strlen function\n");
		return -1;
	}
	printf("Well you pass the first test\n");
	char input2[] = { '1', '2', '3', '4', '5', '\0' };
	if(Mystrlen(input2) != 5){
		printf("Your function is not fit out requirement,please check you strlen function\n");
		return -1;
	}

	printf("Well you pass all the  tests\n");
	return 0;
}

