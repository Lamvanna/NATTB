#include "stdio.h"

void swap(int &a, int &b){
	int tam=a;
	a = b;
	b = tam;
}

void sapXepTang(int x[], int n){
	for(int i=0; i<n-1; i++){
		int vitrinhonhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j]<x[vitrinhonhat])
				vitrinhonhat = j;
		}
		swap(x[i],x[vitrinhonhat] );
	}
}
	void printMang(int x[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int main(){
	int a[100], n;
	do{
		printf("Nhap vao so luong phan tu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 ||  n>100);
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}

	printf("\n Mang tang dan: ");
	sapXepTang(a, n);
	printMang(a, n);
}

