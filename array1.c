#include<stdio.h>
int main(){
	int i, grades[3] , sum=0, average;
	for(i=0;i<3; i++){
		printf("Enter grades %d: ");
		scanf("%d", &grades[i]);
	}
	for(i=0;i<3; i++){
		sum += grades[1];
	}
	average = sum/3;
	printf("the 2nd grade is: %.2f\n", average);
	if (average >= 75){
		printf("pass");
	}else{
		printf("fail");
	}		
}
