#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void inhoa     (char S[100]);
void nhap      (char S[50]);
void xuat      (char S1[50]);
void demtu     (char S1[50]);
void noichuoi  (char S1[50], char S2[50], char S3[100]);
void dx        (char S1[50]);
void dao       (char S1[50]);

//( Tat Unikey truoc khi chay chuong trinh nhe !)

int main()
{
	char S1[50], S2[50], S3[100];
   	int key;
   	while(true)
   	{
        system("cls");
        printf("************************************\n");
		printf("**      THAO TAC TREN CHUOI       **\n");
		printf("**   1.Nhap va chuan hoa chuoi    **\n");
		printf("**   2.Dem so tu trong chuoi      **\n");
		printf("**   3.Ghep chuoi                 **\n");
		printf("**   4.Kiem tra doi xung          **\n");
		printf("**   5.In chuoi dao nguoc         **\n");
		printf("**   0.Thoat                      **\n");
		printf("************************************\n");
		fflush(stdin);
		printf("\n \t\tAN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
              {
           	  case 1:
					fflush(stdin);
					nhap(S1);
					xuat(S1);
			  		printf("\nBam phim bat ky de tiep tuc!");
			  		getch();
			  		break;
			  case 2:
			  	 	demtu(S1);
					printf("\nBam phim bat ky de tiep tuc!");
					getch();
					break;
			  case 3:
			  		fflush(stdin);
					nhap(S2);
					noichuoi(S1,S2,S3);
					printf("\nBam phim bat ky de tiep tuc!");
					getch();
					break;
		      case 4:
		      	 	dx(S1);
 					printf("\n\nBam phim bat ky de tiep tuc!");
 					getch();
					break;
			  case 5:
					printf("\nBam phim bat ky de tiep tuc!");
 					dao(S1);
					getch();
					break;
			  case 0:
					exit(1);
					default:
					printf("\nKhong co chuc nang nay!");
					printf("\nBam phim bat ky de tiep tuc!");
					getch();
					break;
		      }
   	  }
}





void nhap(char S[50])//1
{
	 printf("Nhap chuoi :\n\n"); gets(S);
}

void inhoa(char S[100])
{
	 S[0]=S[0]-32;
	 for (int i=0;i<strlen(S);i++)
	 {
	 	 if (S[i]==' ' && S[i+1]!=' ')
	 	 {
	 	 	S[i+1]=S[i+1]-32;
	 	 }
	 }
}

void xuat(char S1[50])//2
{
	 int i;
	 printf("\n\nXuat chuoi chuan :\n\n");
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[0]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
	 	 }
     }
     for (i=0;i<strlen(S1);i++)
     {
	 	 if (S1[i]==' ' && S1[i+1]==' ')
	 	 {
	 	 	for (int j=i;j<strlen(S1);j++)
	 	 	{
	 	 		S1[j]=S1[j+1];
	 	 	}
	 	 i--;
		 }
	 }
	 for (i=0;i<strlen(S1);i++)
	 {
	 	 if (S1[strlen(S1)-1]==' ')
	 	 {
	 	 	S1[strlen(S1)-1]='\0';
	     }
     }
	 strlwr(S1);
	 inhoa(S1);
	 puts(S1);

}


void demtu(char S1[50])
{
	 int dem=0;
	 for(int i=0;i<strlen(S1);i++)
	 {
	 	if(S1[i]==' ') dem++;
	 }
	 printf("\n\nCo %d tu trong chuoi !",dem+1);
}


void noichuoi(char S1[50], char S2[50], char S3[100])
{
	 for(int i=0;i<strlen(S1);i++)
	 {
	 	S3[i]=S1[i];
	 }
	 for(int i=0;i<strlen(S2);i++)
	 {
	 	S3[strlen(S1)+i]=S2[i];
	 }
	 printf("\n\nChuoi sau khi ghep :\n\n"); puts(S3);
}


void dx(char S1[50])
{
	 int check;
	 printf("\n\n Chuoi S :\n\n"); puts(S1);
	 strlwr(S1);
	 if (strlen(S1)%2==0)
	 {
	 	check=1;
	 	for (int i=0;i<(strlen(S1)/2);i++)
	 	{
	 	    if (S1[i]!=S1[strlen(S1)-1-i])
	 	    {
	 	       check=0;
	 	       break;
	 	    } 
	 	}
	 }
	 else 
	 {
	 	check=1;
	 	for (int i=0;i<((strlen(S1)-1)/2);i++)
	 	{
	 	    if (S1[i]!=S1[strlen(S1)-1-i])
	 	    {
	 	       check=0;
	 	       break;
	 	    } 
	    }
     }
	 if (check==0) printf("\n\nChuoi la chuoi khong doi xung !");
	 else          printf("\n\nChuoi la chuoi doi xung !");
	 inhoa(S1);
}


void dao(char S1[50])
{
     char Nguoc[50];
	 for (int i=0;i<strlen(S1);i++)
	 {
	 	 Nguoc[i]=S1[strlen(S1)-1-i];
	 }
	 printf("\n\nChuoi nguoc cua chuoi la :\n\n"); puts(Nguoc);
}




