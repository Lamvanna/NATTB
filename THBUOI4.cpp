#include <stdio.h>
int a[100][100];
int m, n;

void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int timMax(int x[100][100], int m, int n){
	int max = x[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(max<x[i][j]){
				max = x[i][j];
			}
		}
	}
	return max;
}
int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	printf("Max = %d", timMax(a, m, n));
}

