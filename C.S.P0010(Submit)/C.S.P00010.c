 #include<stdio.h>
#include<stdlib.h>
#include<String.h>
void input(int *n, int a[]){ 
	do{
	printf("Please enter size of array: ");
	scanf("%d", n);
} while (n > 0);
	
	int i;
	for(i=0; i < *n; i++){
		printf("Enter element[%d]: ", i);
		scanf("%d", &a[i]);
	} 	
}

int removeDuplicate(int n, int arr[]){
	if (n==0 || n==1) 
        return n; 
  
    int i,j,k;
	for(i=0; i < n-1; i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				n-=1;
				for(k=j;k<=n;k++){
					arr[k]=arr[k+1];
				}
				j-=1;
			}
		}
	}
    return n; 
}

void output(int *n, int a[]){
	int i;
	for(i=0; i< *n; i++){
		printf("%d ",a[i]);
	}
}

int main(){
	int n, a[10], i;
	input(&n, a);
	printf("Old Array: ");
	output(&n,a);
	n = removeDuplicate(n, a);
	printf("\nAfter remove duplicate: ");
	output(&n, a);
	return 0;
}
