#include<stdio.h>
#include<stdlib.h>
void input(int &n, int &m){
	printf("Matrix add:\n");
	do{
		printf("Accept size: ");
		scanf("%d %d", &n, &m);
	} while(n < 1 || m < 1);
}
void inputArray(int n, int m){
	int i, j;
	int a1[n][m];
	int a2[n][m];
	int sum[n][m];
	printf("\nAccept matrix m1: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a1[i][j]);
			getchar();
		}	
	}
	printf("\nAccept matrix m2: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a2[i][j]);
			getchar();
		}	
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			sum[i][j] = a1[i][j] + a2[i][j];
		}	
	}
	printf("\nm = m1 + m2 \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n,m;
	input(n,m);
	printf("%d %d \n", n, m);
	inputArray(n,m);
	return 0;
}
