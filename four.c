//file name : four.c
#include "stdio.h"

#define wow printf("++++++++++++++++++++++\n");

main(){
	char name[50];
	int age;
	wow;
	printf("  Program Check Age\n");
	wow;
	printf(" Please enter name : ");
	scanf("%s",&name);
	printf(" Please enter age : ");
	scanf("%d",&age);
	wow;
	if(age < 35){
		printf(" You are younger\n");
	}else{
		printf(" You are older\n");
	}
	wow;
	
	
	getch();
}
