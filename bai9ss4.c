#include <stdio.h>

int main (){
	int ngay , thang ,nam , sntt ;
	printf ("nhap ngay :");
	scanf ("%d",&ngay);
	printf ("nhap thang :");
	scanf ("%d",&thang);
	printf ("nhap nam :");
	scanf ("%d",&nam);
	
	if (thang <=1 && thang >=12)
	printf ("ngay thang nam khong hop le");
	
	switch (thang){
		case 1 : case 3 : case 5 : case 7 : case 8: case 10 : case 12 :
			sntt = 31;
		break ;
		case 4 : case 6 : case 9 : case 11 : 
		    sntt = 30;
		break ;	
		case 2 :
			if ((nam %4 ==0 && nam % 100!= 0) || (nam % 400 == 0))
			sntt = 29;
			else 
			sntt = 28;
	    break ;
	}
	if (ngay >=1 && ngay <= sntt)
	printf ("ngay thang nam hop le");
	else 
	printf ("ngay thang nam khong hop le");
	
	return 0 ;
}
