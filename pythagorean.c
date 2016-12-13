#include<stdio.h>
#include<math.h>

int main(){
	int a;
	int b;
	int d;
	int e;
	double c;
	
	printf("enter value of a:\n");
	scanf("%d", &a);
	printf("enter value of b:\n");
	scanf("%d", &b);
	
	
	d=a*a;
	e=b*b;
	c=d+e;
	
	printf("c is equals to:\n")
	printf("%lf", sqrt(c));
	
}
