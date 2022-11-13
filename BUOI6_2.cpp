#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ int n, key;
while(true)
{
system("cls");
printf("********************************************************\n");
printf("**          CHUONG TRINNH QUAN LY SINH VIEN           **\n");
printf("**          1. Nhap DS sinh vien                      **\n");
printf("**          2. In danh sach sinh vien                 **\n");
printf("**          3. Sap xep theo Kq cuoikhoa               **\n");
printf("**          4. In sinh vien gioi, Xuat sac            **\n");
printf("**          5. Tim kiem sinh vien thao MASV           **\n");
printf("**          0. Thoat                                  **\n");
printf("********************************************************\n");

printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:
//goi ham thuc de hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung

getch();

break;

case 4:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;
case 5:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
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
