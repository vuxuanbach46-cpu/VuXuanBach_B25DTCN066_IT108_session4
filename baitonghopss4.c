#include <stdio.h>

int main (){
	int nam , tuoi ;
	double dtb ;
	printf ("Nhap nam sinh :");
	scanf ("%d",&nam);
	printf ("Nhap diem trung binh :");
	scanf ("%lf",&dtb);
	
	if (nam < 1900 || nam >= 2025)
	printf ("Nam sinh khong hop le\n");
	
	tuoi = 2025 - nam;
	printf ("Tuoi :%d\n",tuoi);
	printf ("Nam sinh :%d\n",nam);
	
	if (dtb<5.0)
		printf ("Hoc luc : yeu");
	else if (dtb>=5.0 && dtb<6.4)
	    printf ("Hoc luc : trung binh");
	else if (dtb>=6.5 && dtb <7.9)
	    printf ("Hoc luc : kha");
	else
	    printf ("Hoc luc : gioi");
	return 0 ;
}
