#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void inputSizeOfArray(int &n){
 	printf("Input a number of element: ");
 	scanf("%d", &n);
 }
 
void inputNumberOfArray(int n, int arr[100]){
 	int i;
 	for(i = 0; i < n;i++){
 		printf("\tElement [%d]: ", i+1);
 		scanf("%d", &arr[i]);
	}
 }
void findMin(int arr[100], int index){
	int min = arr[0];
	int n = 0;
	for(int i = 0; i < index; i++){
		if(arr[i] < min){
			min = arr[i];
			n = 1;
		}
	}
	for(int i = 0; i < index; i++){
		if(n == 1){
			printf("\nArray minimum value: %d - position: %d\n", arr[i], i);
		}
	}
	
}
 int main(){
 	int n = 0, arr[100], index = 0;
 	inputSizeOfArray(n);
	inputNumberOfArray(n, arr);
	findMin(arr, index);
 }
