#include<stdio.h>

int main(){
	int m;
	int d;
	
	printf("Enter month(1-12):\n");
	scanf("%d", &m);
	printf("Enter day(1-7):\n");
	scanf("%d", &d);
	
	if(m==1)
	printf("January ");
	if(m==2)
	printf("February ");
	if(m==3)
	printf("March ");
	if(m==4)
	printf("April ");
	if(m==5)
	printf("May ");
	if(m==6)
	printf("June ");
	if(m==7)
	printf("July ");
	if(m==8)
	printf("August ");
	if(m==9)
	printf("September ");
	if(m==10)
	printf("October ");
	if(m==11)
	printf("November ");
	if(m==12)
	printf("December ");
	
	if(d==1)
	printf("Sunday ");
	if(d==2)
	printf("Monday ");
	if(d==3)
	printf("Tuesday ");
	if(d==4)
	printf("Wednesday ");
	if(d==5)
	printf("Thursday ");
	if(d==6)
	printf("Friday ");
	if(d==7)
	printf("Saturday ");
	
}
