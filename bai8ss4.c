#include <stdio.h>

int main (){
	int a , b , c;
	printf ("nhap canh 1 :");
	scanf ("%d",&a);
	printf ("nhap canh 2 :");
	scanf ("%d",&b);
	printf ("nhap canh 3 :");
	scanf ("%d",&c);
	
	if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	printf ("la 3 canh tam giac");
	else 
	printf ("khong phai 3 canh tam giac");
	
	return 0;
	
}
