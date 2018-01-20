/**
 * In this part, you need to implement  a function which
 * is already implemented in C library - getline.In order
 * to solve the name collusion, you getline function name
 * will be myGetLine.Please baidu or read some blog about
 * what this function is doing.      ----------Good luck!
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
/**
 * In this function, you get one parameter, this parameter
 * is use to accept the buffer or array you passed.You job:
 * 1.Checke the buffer lineptr pointer to, is it a vaild 
 * if not use malloc to allocate a new space, then set
 * lineptr to point to.
 * 2.Get the input from keyboard use getchar() function,
 * consider if there is a '\n' which is a newline symbol
 * in linux platform.
 * 3.Use the myGetLine return value to tell the caller
 * how many characters in the line you return.
 * 4.Please don't use magic number!
 */
#define SIZE 20
int myGetLine(char** lineptr){
  return -1;
}
//Test code here, don't modify
int main(int argc, char **argv){
  char *arr=NULL;
  close(0);
  int fd = open("test1.txt", O_RDONLY);
  printf("The fd is %d\n", fd);
  if(fd == -1){
    printf("Some error happen during the file open \n");
    return -1;
  }
  int count1 = myGetLine(&arr);
  printf("The len of count1 is %d\n", count1);
	if(count1 != 5){
    printf("You don't pass the test 1, there may be some problems in your function,check it\n");
    return -1;
  }
  printf("You pass the first  test !!\n");
  char *arr1 = NULL;
  close(fd);
  int fd1 = open("test2.txt", O_RDONLY);
  printf("The fd is %d\n", fd1);
  if(fd1 == -1){
    printf("Some error happen during the file open \n");
    return -1;
  }
  int count2 = myGetLine(&arr1);
  if(count2 != 10){
    printf("You don't pass test 2, there may be some problems in your function,check it\n");
    return -1;
  }
  // Here you may want to do some work!!
  printf("Well done ,you pass all the tests!\n");
}



