#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100

void inputArray(int *index, int arr[MAX]){
	printf("Enter the element of array:\n");
	do{
		*index += 1;
		scanf("%d", &arr[*index]);
	} while(arr[*index] != 0);
}

void printArray(int index, int arr[MAX]){
	printf("Array elements: ");
	for(int i = 0; i < index; i++){
			printf("%d ", arr[i]);
	}
}
void findMax(int arr[MAX], int index){
	int max = arr[0];
	for(int i = 1; i < index; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("\nArray maximum value: %d\n", max);
}
void printEven(int arr[MAX], int index){
	printf("Array even values: ");
	for(int i = 0; i < index; i++){
		if(arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
}
int main(){
	int index = -1, arr[MAX];
	inputArray(&index, arr);
	printArray(index, arr);
	findMax(arr,index);
	printEven(arr, index);
	return 0;
}
