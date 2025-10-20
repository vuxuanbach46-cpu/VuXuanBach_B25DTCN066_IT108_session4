#include <stdio.h>

int main (){
	int a , b , c , s;
	printf ("nhap so thu 1 :");
	scanf ("%d",&a);
	printf ("nhap so thu 2");
	scanf ("%d",&b);
	printf ("nhap so thu 3");
	scanf ("%d",&c);
	
	if (a>b){
		s = a;
		a = b;
		b = s;
	}
	if (a>c){
		s = a; 
		a = c;
		c = s;
	}
	if (b>c){
		s = b;
		b = c;
		c = s;
	}
	printf ("thu tu tang dan : %d %d %d",a , b, c);
	
	
	return 0;
}
