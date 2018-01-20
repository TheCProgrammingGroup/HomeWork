#include "encrpty.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define VERSION2
#ifdef VERSION1
void encrypt(char* msg, char* encryptMsg){
  while(*msg != '\0'){
    *encryptMsg = *msg + 1;
    encryptMsg++;
    msg++;
  }
  encryptMsg = '\0';
}
void printProcess(){
  printf("Encrypt method version 1\n");
}
#endif
#ifdef VERSION2
void encrypt(char* msg, char** Msg){
  int len = strlen(msg) + 1;
  if(*Msg == NULL){
    *Msg = malloc(len * sizeof(char));
  } 
  int i = 0;
  while(msg[i] != '\0'){
   Msg[0][i] = msg[i] + 1;
    i++;
  }
  Msg[0][i] = '\0';
}
void printProcess(){
  printf("Encrypt method version 2\n");
}

#endif
#ifdef VERSION3
void encrypt(char* msg, char* encrptyMsg){

}
void printProcess(){
  printf("Encrypt method version 3\n");
}
#endif
