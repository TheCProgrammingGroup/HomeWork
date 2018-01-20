/**In this part, we will show you some example about
 * what is function pointer.Function pointer is just
 * like a normal pointer, it points to something.Unlike
 * a normal pointer, it point to a function.
 * 
 * You can use the function pointer to choose which 
 * function prototype you want(It means you can choose
 * what is the argument and return type)
 */

/* In this example, we will sort an array, but there 
 * a several ways to do that, such as bubble sort,
 * quicksort..etc.But the input type  and return
 * type may be the same, in this situation,you 
 * can use function pointer.
 *
 * */
#include <stdio.h>

void sortAlogrithm(void (*sortFunc)(int*, int), int arr[], int len){
    sortFunc(arr, len);
}
void bubbleSort(int* arr, int len){
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++){
      if(arr[j] > arr[j+1]){
        int ch = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = ch;
      }
    }
  }
  printf("Bubble sort finished!..\n");
}

void chooseSort(int* arr, int len){
  for(int i = 0; i < len; i++){
    for(int j = i; j < len; j++){
      if(arr[j] < arr[i]){
        int ch = arr[j];
        arr[j] = arr[i];
        arr[i] = ch; 
      }
    }
  }
  printf("chooseSort finished...\n");
}
int main(int argc, char** argv){
  int arr[] = {-1, 2, 5, 4 ,3};
  printf("This time we use bubblesort..\n");  
  sortAlogrithm(&bubbleSort, arr, 5);
  int arr1[] = {-2,3,5,1,5};
  printf("This time we use chooseSort..\n");
  sortAlogrithm(&chooseSort, arr1, 5);
  
}
