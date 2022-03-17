//file name : seven.c
#include "stdio.h"
#define line printf("===============================\n");
main(){
	int bus_num;
	
	line
	printf(" Program Bus Information\n");
	line
	printf(" Please enter bus number : ");
	scanf("%d",&bus_num);
	line
	if(bus_num == 57){
		printf(" Go to Pinklao bridge\n");
	}else if(bus_num == 3){
		printf(" Go to Sanam Luang\n");
	}else if(bus_num == 71){
		printf(" Go to Hau Lum Pong\n");
	}else if(bus_num == 56){
		printf(" Go to Banglampoo\n");
	}else if(bus_num == 539){
		printf(" Go to Victory Monument\n");
	}else{
		printf("Do not have data\n");
	}
	line
	
	getch();
}
