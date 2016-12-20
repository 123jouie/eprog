#include<stdio.h>

int main(){
	int grade;
	
	printf("Enter grade: ");
	scanf("&d", &grade);
	if(grade%3==0){
		printf("Ed");
	}else{
		printf("\n");
		
	}
	if(grade%5==0){
		printf("Pogi");
	}else{
		printf("\n");
	}
}
