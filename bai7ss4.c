#include <stdio.h>

int main (){
	int a ;
	printf ("nhap nam :");
	scanf ("%d",&a);
	 
	if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
	printf ("nam %d la nam nhuan",a);
	else 
	printf ("nam %d khong phai la nam nhuan :",a);
	return 0;
}
