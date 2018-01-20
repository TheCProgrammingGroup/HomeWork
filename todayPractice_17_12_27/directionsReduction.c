#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** dirReduc(char** arr, int sz, int* lg); 
void doTest(char** arr, int sz, char** exparr, int expnum){
  int lg = -1;
  char** ret = dirReduc(arr, sz, &lg);
  if(lg != expnum){
    printf("We expected the final number of the array is %d but got %d\n", expnum, lg);
    exit(-1);
  }
  for(int i = 0; i < lg; i++){
    if(strcmp(ret[i], exparr[i])){
      printf("We expected the final string  is %s but got %s\n", exparr[i], ret[i]);
      exit(-1);
    }
  }
  printf("You have passed all of them..!!!\n");
}


char** dirReduc(char** arr, int sz, int* lg) {
 return NULL;
}

int main(int argc, char** argv){
  char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
  char* d1_output[1] = {"WEST"};
  doTest(d1, 7, d1_output, 1);

}
