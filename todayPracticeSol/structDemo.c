/**
 * In this short demo, we will show you how to use struct in C.
 *
 */

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct{
  int age;
   char* name;
}student;

//What if we want to modify the value in the struct in a function
void modifyStruct(student* s){
  s->name = "lisi";
  s->age = 2;
}
//Sometimes you want to create a struct in a function
student* createStudent(){
  //Tell why malloc or calloc 
  student* s = malloc(sizeof(student));
  s->name = "newone";
  s->age = 12;
  return s;
}
//What if the struct content is an array or something created dynamiclly
student* createStudent1(){
  student* s = malloc(sizeof(student));
  s->age = 13;
  s->name = malloc(sizeof(4 * sizeof(char)));
  strcpy(s->name, "abc"); 
  return s;
}


int main(int argc, char** argv){
  //Init the student struct with a given value
  student s = {1, "liming"};
  //Output the content
  printf("The age of the student is %d and the name of the student is %s\n",s.age, s.name);  
  modifyStruct(&s);
  printf("The age of the student is %d and the name of the student is %s\n",s.age, s.name);  
  student* s1 = createStudent();
  printf("The age of the student is %d and the name of the student is %s\n",s1->age, s1->name);  
  student* s2 = createStudent1();
  printf("The age of the student is %d and the name of the student is %s\n",s2->age, s2->name);  
}
