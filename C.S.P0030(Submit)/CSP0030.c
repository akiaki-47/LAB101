#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 int inputSizeOfArray(){
 	int n;
 	printf("Input a number of element: ");
 	scanf("%d", &n);
 	return n;
 }
 
 void inputNumberOfArray(int n, int a[]){
 	int i;
 	for(i = 0; i < n;i++){
 		printf("\tElement [%d]: ", i+1);
 		scanf("%d", &a[i]);
	}
 }
 
 int calcSumOdd(int sumOdd, int oddNumber){
 	return sumOdd += oddNumber;
 }
 
  int calcSumEven(int sumEven, int evenNumber){
 	return sumEven += evenNumber;
 }
 
 int main(){
	int number, arr[100], i;
	int sumOdd = 0, sumEven = 0;
	number = inputSizeOfArray();
	inputNumberOfArray(number, arr);
	for(i = 0; i < number; i++){
		if(arr[i] % 2 != 0){
			sumOdd = calcSumOdd(sumOdd, arr[i]);
		}
		else {
			sumEven = calcSumEven(sumEven, arr[i]);
		}
	}
	printf("Sum Odd: %d\n", sumOdd);
	printf("Sum even: %d", sumEven);
	return 0;
 }
