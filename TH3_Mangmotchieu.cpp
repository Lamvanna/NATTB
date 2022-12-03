#include <stdio.h>
int A[100];
void nhapmang    (int A[100],int n);
void xuatmang    (int A[100],int n);
void max         (int A[100],int n);
void tich        (int A[100],int n);
void dsnt        (int A[100],int n);
int kiemtraSNT   (int a);
void timx        (int A[100],int n,int x);
void sapxep      (int A[100],int n);
void chenx       (int A[100],int n, int x);
void xoa         (int A[100],int n);

int main()

{
	int n,x;
	printf ("Nhap phan tu cho mang la so nguyen :"); 
	scanf("%d",&n);
	while (n>99)
	{
		printf("\nNhap lai mang:"); 
		scanf("%d",&n);
	}
	
	nhapmang(A,n);
	xuatmang(A,n);
	max(A,n);
	tich(A,n);
	dsnt(A,n);
	printf("\n\nNhap x="); 
	scanf("%d",&x);
	timx(A,n,x);
	sapxep(A,n);
	chenx(A,n,x);
	n++;
    xoa(A,n);
}

//1.nhap mang
void nhapmang (int A[100], int n)//nhap mang
{
	printf("\n\nNhap gia tri cac phan tu cho mang A :");
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n\nNhap gia tri cho phan tu A[%d]=",i); scanf("%d", &A[i]);
	}
}


//xuat mang
void xuatmang ( int A[100], int n)//xuat mang
{
	printf("\n\nXuat gia tri cac phan tu cho mang A :");
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n\nGia tri cua phan tu A[%d]=%d",i,A[i]);
	}

}



// tim gia tri lon nhat
void max(int A[100], int n)
{
	int i,j,gtln=0;
	for(i=0;i<n;i++)
	{
		if (gtln <= A[i]) gtln = A[i];
		if (gtln <= A[i]) j=i;
	}
	printf("\n\nGia tri lon nhat trong mang la gia tri %d cua phan tu A[%d]",gtln,j);
}

void tich (int A[100],int n)// tinh tich cua mang
{
    int i;
	long tich=1;
	for (i=0;i<n;i++)
	{
		tich=tich*A[i];
	}
	printf("\n\nTich cac phan tu trong mang =%d",tich);
}

int kiemtraSNT (int a)
{
	int i,dem=0;
	for(i=2;i<=a;i++)
	{
		if (a%i==0) dem++;
	}
	return dem;
}

void dsnt(int A[100],int n)//dem so nguyen to va tinh tong cac snt
{
	int i,j,dem=0;
	int tong=0;
	int demsnt=0;
	for(i=0;i<n;i++)
	{
		if (kiemtraSNT(A[i])==1) demsnt++; 
		if (kiemtraSNT(A[i])==1) tong=tong+A[i];
	
		
	}
	printf("\n\nCo %d phan tu la so nguyen to trong mang A",demsnt);
	printf("\n\nTong cac phan tu la so nguyen to trong mang A= %d",tong);
}


//tim phan tu bang x
void timx (int A[100], int n,int x)
{
	int i,dem=0;
	for (i=0;i<n;i++)
	{
		if (A[i]==x) printf("\n\nGia tri %d cua phan tu A[%d] bang x",x,i);
		if (A[i]==x) dem++;
	}
	if (dem==0) printf("\n\nKhong co gia tri phan tu nao trong mang A");
}


//sap xep mang tang dan
void sapxep (int A[100],int n)
{
  int MIN;
    for(int i=0; i<n-1; i++)
	{
        for(int j=i+1;j<n;j++)
		{
           if(A[i]>A[j])
			{
            MIN=A[i];
            A[i]=A[j];
            A[j]=MIN; 
            }
        }
    }
    printf("\n\nSap xep mang tang dan :\n\n");
    for(int i=0;i<n;i++)
    {
    	printf(" %d ",A[i]);
    }
}


//chen gia tri cua x vao mang
void chenx(int A[100],int n, int x)
{
     printf("\n\nChen gia tri %d cua x vao phan tu A[%d]",x,n);
     A[n]=x;
     printf("\n\nMang A sau khi chen x:");
     for(int i=0;i<n+1;i++)
     {
     	printf(" %d ",A[i]);
     }
}
//xoa cac phan tu co gia tri bang k
void xoa(int A[100],int n)
{
	int k,dem=0;
	printf("\n\nNhap k="); scanf("%d",&k);
	for(int f=0;f<n;f++)
	{
		for(int i=0;i<n;i++)
        {
	       if(A[i]==k)
	       {
	   	     dem++;
	         for(int j=i;j<n-1;j++)
	         {
		        A[j]=A[j+1];
		     }
		     n--;
	      }
	   }
	}
	if (dem==0)
	{
	   printf("\n\nmang A khong thay doi !");
	   printf("\n\nMang A :");
	   for(int i=0;i<n;i++)
	   {
	      printf(" %d ",A[i]);
	   }
	}
	else
	{
	   printf("\n\nMang A sau khi xoa cac phan tu bang k :");
	   for(int i=0;i<n;i++)
	   {
	      printf(" %d ",A[i]);
	   }
	}
	
}
	
	
	
	
