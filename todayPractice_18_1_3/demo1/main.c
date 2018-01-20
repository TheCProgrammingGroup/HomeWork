#include "encrpty.h"
#include <stdio.h>
int main(int argc, char** argv){
  /*char arr[] = "The";
  char output[4]; 
  encrypt(arr, output);
  printf("The encrypted message is %s \n", output);
  //Bad situation for version 1
  */ 
  char arr[] = "The";
  char* output = NULL; 
  encrypt(arr, &output);
  printf("The encrypted message is %s \n", output);
  
}
