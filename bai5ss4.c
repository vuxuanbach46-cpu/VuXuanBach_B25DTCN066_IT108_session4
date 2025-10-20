#include <stdio.h>

int main (){
	int sdc ,sdm , sodien ;
	long tien ;
	
	printf ("nhap so dien cu :");
	scanf ("%d",&sdc);
	printf ("nhap so dien moi :");
	scanf ("%d",&sdm);
	
	sodien = sdm - sdc ;
	if (sodien>=0 && sodien<50)
	tien = sodien * 10000;
	else if (sodien>=50 && sodien<100)
	tien = sodien * 15000;
	else if (sodien>=100 && sodien<150)
	tien = sodien * 20000;
	else if (sodien>=150 && sodien<200)
	tien = sodien * 25000;
	else if (sodien>=200)
	tien = sodien * 30000;
	
	printf ("tien dien trong thang cua ho gia dinh la :%ld VND",tien);
	
	return 0;
}
