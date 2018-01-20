/**
 *Hello, every if you see this file, it means you 
  want to have a better understanding of C. 
  So in the following practice you need to implement
  a function called binarysearch.
  
  What is binarysearch? According to wiki explaination:
  Search a sorted array by repeatedly dividing the search interval in half. 
  Begin with an interval covering the whole array. 
  If the value of the search key is less than the item in the middle of the interval, 
  narrow the interval to the lower half. Otherwise narrow it to the upper half. 
  Repeatedly check until the value is found or the interval is empty. 
  
  As you can see, if we want to use binary search, we need a sorted Array, so the 
  first part is to implement a function to sort an array in ascend order.

  Second part you need to implement the binarysearch alogrithm.
 *
 *
 *
 */
#include <stdio.h>
#define  LEN 8
/***First Part***/
//You can use bubble sort, quick sort or any sort alogrithm you have learned.
void sortArray(int arr[])
{
//Add your code here...
}


/***Second***/
int binarySearch(int arr[], int startIndex, int endIndex, int target){
	return -1;
}
 
//This contains some test code , don't modify
int main(int argc, char ** argv){
	printf("After you finish your code, we test you function\n");
  int input1[] = {2,1,0,5,4,-1,3,7};
  sortArray(input1);
	int output1[] = {-1,0,1,2,3,4,5,7};
	for(int i = 0; i < LEN; i++){
		if(input1[i] != output1[i]){
			printf("Your sortArray function is not want we want\n");
			printf("Please sort the array in ascend order\n");
	   		return -1;
		}
	}
	printf("The array is sorted\n");
	printf("Next we test binarySearch fucntion\n");
  if(binarySearch(input1, 0, LEN - 1, 3) != 4){
		printf("Your binarySearch function is not what we want, please check it\n");
		return -1;
	}
	printf("You pass the first test !\n");

  int input2[] = {1,0,5,4,7,2,0,6};
  sortArray(input2);
	int output2[] = {0,0,1,2,4,5,6,7};
	for(int i = 0; i < LEN; i++){
		if(input2[i] != output2[i]){
			printf("Your sortArray function is not want we want\n");
			printf("Please sort the array in ascend order\n");
			return -1;
		}
	}
	printf("The array is sorted\n");
	printf("Next we test binarySearch fucntion\n");
  if(binarySearch(input2, 0 ,LEN - 1, 3) != -1){
		printf("Your binarySearch function is not what we want, please check it\n");
		return -1;
	}
	printf("You pass the second test !\n");
	printf("I :");

	printf("Well done!!You pass all the test!!\n");
 	return 0;
}






