#include <stdio.h> 
#include <conio.h> 
//deklarasi type data 
typedef int angka; 
typedef float pecahan; 
typedef char huruf; 
// deskripsi program 
void main() 
{ 
 clrscr(); 
 angka umur;
 pecahan pecah; 
 huruf h; 
 huruf nama[10]; 
 printf("masukkan jumlah saudara anda : ");scanf("%d",&umur); 
 printf("jumlah saudara anda adalah %d",umur); 
 printf("\nmasukkan bilangan genap : ");scanf("%f",&pecah); 
 printf("Bilangan genap %f",pecah); 
 printf("\nmasukkan abjad : ");h=getche(); 
 printf("\nabjad anda %c",h); 
 printf("\nmasukkan nama : ");scanf("%s",nama); 
 printf("Nama anda %s",nama); 
 getch(); 
}
