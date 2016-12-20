#include<stdio.h>

int main(){
	int number;
	
	printf("Enter number:");
	scanf("&d", &number);
	if(number %3==0){
		printf("Ed");
	}else{
		printf("Not divisible");
	}
	if(number %5==0){
		printf("Pogi");
	}else{
		printf("Not Divisible");
	}
}
