#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** dirReduc(char** arr, int sz, int* lg); 
void freeMemory(char** arr, int lg){
  for(int i = 0 ; i < lg; i++){
    free(arr[i]);
  }
  free(arr);
}
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
  freeMemory(ret, lg);
  printf("You have passed all of them..!!!\n");
}

char** dirReduc(char** arr, int sz, int* lg) {
  char** ret = malloc(0);
  int count = 0;
  for(int i = 0; i < sz; i++){
    if(count == 0){ 
      count++;
      ret = realloc(ret, count * sizeof(char *));
      char* str1 = malloc(strlen(arr[i]) + 1); 
      strcpy(str1, arr[i]);
      ret[count - 1] = str1;
    }else if(!strcmp(arr[i], "NORTH")){
      if(!strcmp(ret[count - 1], "SOUTH")){
        free(ret[--count]);
      }else{
        char* str1 = malloc(strlen(arr[i]) + 1); 
        strcpy(str1, arr[i]);
        ret = realloc(ret, (count+1) * sizeof(char *));
        ret[count++] = str1;
      }   
    }else if(!strcmp(arr[i], "SOUTH")){
      if(!strcmp(ret[count - 1], "NORTH")){
        free(ret[--count]);
      }else{
        char* str1 = malloc(strlen(arr[i]) + 1); 
        strcpy(str1, arr[i]);
        ret = realloc(ret, (count+1) * sizeof(char *));
        ret[count++] = str1;
      }   
    }else if(!strcmp(arr[i], "WEST")){
      if(!strcmp(ret[count - 1], "EAST")){
        free(ret[--count]);
      }else{
        char* str1 = malloc(strlen(arr[i]) + 1); 
        strcpy(str1, arr[i]);
        ret = realloc(ret, (count+1) * sizeof(char *));
        ret[count++] = str1;
      }   
    }else if(!strcmp(arr[i], "EAST")){
      if(!strcmp(ret[count - 1], "WEST")){
        free(ret[--count]);
      }else{
        char* str1 = malloc(strlen(arr[i]) + 1); 
        strcpy(str1, arr[i]);
        ret = realloc(ret, (count+1) * sizeof(char *));
        ret[count++] = str1;
    }
  }
 }
 *lg = count;
 return ret;
}

int main(int argc, char** argv){
  char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
  char* d1_output[1] = {"WEST"};
  doTest(d1, 7, d1_output, 1);
  
}
