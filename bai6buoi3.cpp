#include "stdio.h"

int main(){
	int a[100];
	int n;
	do{
		printf("Nhap vao so luong phan tu cua mang la");
		scanf("%d", &n);
	}while(n<1 || n>100);
	for(int i=0; i<n; i++){
		printf("\a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("Mang vua nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}	
	int tong = 0;
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	printf("\nTong = %d", tong);
}

