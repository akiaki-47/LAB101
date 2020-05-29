#include<stdio.h>
#include<conio.h>
#define MAX 100


void swapAsc(int arr[], int n){
	int i, j, temp;
	for(i = 0; i < n - 1; i++){
		int min = i;
		for(j = i + 1; j < n; j++){
			if(arr[min] > arr[j]){44
			
				temp = arr[j];
				arr[j] = arr[min];
				arr[min] = temp;
			}
		}
	}	
	printf("Ascending: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void swapDesc(int arr[], int n){
	int i, j, temp;
	for(i = 0; i < n - 1; i++){
		int min = i;
		for(j = i + 1; j < n; j++){
			if(arr[min] < arr[j]){
				temp = arr[j];
				arr[j] = arr[min];
				arr[min] = temp;
			}
		}
	}	
	printf("\nDescending: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

int main() {
	int i, n, key;
	int arr[MAX];
	do{
		printf("Please enter size of array: ");
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			printf("Enter element[%d]: ", i);
			scanf("%d", &arr[i]);
		}
		swapAsc(arr, n);
		swapDesc(arr, n);
		printf("\nPress any key to continue, ESC to exit");
		key = getch();
	} while(key != 27);
	getchar();
	return 0;
}
