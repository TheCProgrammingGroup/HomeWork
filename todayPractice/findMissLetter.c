/* Write a method that takes an array of consecutive (increasing) letters as input 
 * and that returns the missing letter in the array.You will always get an valid array. 
 * And it will be always exactly one letter be missing. The length of the array will 
 * always be at least 2.The array will always contain letters in only one case.

Example:

['a','b','c','d','f'] -> 'e'
['O','Q','R','S'] -> 'P'*/

#include <stdio.h>
#include <stdlib.h>
char findMissLetter(char array[], int arrayLength){
  //Add your code
  return '\0';
}
void doTest(char array[], int arrayLength, char expr){
  char ret = findMissLetter(array, arrayLength);
  if(ret != expr){
    printf("We expect a %c, but got a %c, please check your function\n",expr, ret);
    exit(-1) ;
  }
}

int main(int argc, char** argv){
  char input1[] = {'a','b','c','e','f'};
  char input2[] = {'A','B','D','E'};
  doTest(input1, 5, 'd');
  doTest(input2, 4, 'C');
  printf("--------------------------------\n");
  printf("|You have passed all of them.|\n");
  printf("--------------------------------\n");
}
