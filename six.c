//file name: six.c
#include "stdio.h"
#define line printf("******************************************\n");
main(){
	char name[50];
	char id[20];
	char grade;
	int score;
	line
	printf(" Program Calculate Greade Student\n");
	line
	printf(" Please enter student id : ");
	scanf("%s" ,&id);
	printf(" Please enter student name : ");
	scanf("%s" ,&name);
	printf(" Please enter student score : ");
	scanf("%d" ,&score);
	line
	if(score < 50){
		grade = 'F';
	}else if(score < 60){
		grade = 'D';
	}else if(score < 70){
		grade = 'C';
	}else if(score < 80){
		grade = 'B';
	}else{
		grade = 'A';
	}
	
	printf(" Grade is : %c \n",grade);
	line
	getch();
}
