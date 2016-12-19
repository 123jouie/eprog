#include<stdio.h>
int main(){
	int grade;
	
	printf("Enter grade: ");
	scanf("&d, &grade");
	if(grade >= 75){
		printf("Passed");
	}else{
		printf("Failed");
	}		
}
