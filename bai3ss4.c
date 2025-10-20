#include <stdio.h>

int main (){
	int a ; 
	printf ("nhap so nguyen :");
	scanf ("%d",&a);
	if (a%3==0 && a%5==0)
	printf ("so vua nhap chia het cho ca 3 va 5");
	else if (a%5==0)
	printf ("so vua nhap chia het cho 5");
	else if (a%3==0)
	printf ("so vua nhap chia het cho  3 ");
	else
	printf ("loi cu phap");
	return 0;
	
}
