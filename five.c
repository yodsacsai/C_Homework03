//file name : five.c
#include "stdio.h"

#define line printf("++++++++++++++++++++++++++++++++++++\n");
main(){
	char name[50];
	char house[15];
	double unit , pay;
	
	line
	printf("  Program Calculate Pay Electric\n");
	line
	printf("  Please enter name : ");
	scanf("%s",&name);
	printf("  Please enter home no. : ");
	scanf("%s",&house);
	printf("  Please enter electric use : ");
	scanf("%lf",&unit);
	line
	if(unit > 100){
		pay = (unit - 100)* 3.50;
		printf(" Pay electric is : %.2lf Bath\n",pay);
	}else{
		printf(" Pay electric is : 0 Bath\n");
	}
	line
	
	getch();
}
