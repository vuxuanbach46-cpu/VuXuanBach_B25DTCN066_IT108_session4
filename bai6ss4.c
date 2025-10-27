#include <stdio.h>

int main (){
	int sdc ,sdm , soDien ;
	long tien ;
	
	printf ("nhap so dien cu :");
	scanf ("%d",&sdc);
	printf ("nhap so dien moi :");
	scanf ("%d",&sdm);
	
	soDien = sdm - sdc ;
	if (soDien < 50)
        tien = soDien * 10000;
    else if (soDien < 100)
        tien = 50 * 10000 + (soDien - 50) * 15000;
    else if (soDien < 150)
        tien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    else if (soDien < 200)
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    else
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
	
	printf ("tien dien trong thang cua ho gia dinh la :%ld VND",tien);
	
	return 0;
}
