#include<stdio.h>
int main(){
	int total_seats,seats_available,seats_to_bereserved,busfees,paid;
	printf("enter totals seats:");
	scanf("%d",&total_seats);
	printf("enter seats available:");
	scanf("%d",&seats_available);
	printf("enter seats to be reserved:");
	scanf("%d",&seats_to_bereserved);
	printf("enter bus fees left:");
	scanf("%d",&seats_available);
	if (total_seats>seats_to_bereserved){
		printf("you have access to reserve a seat");
		if(busfees!=paid){
			printf("pay fees and then you can reserve");
		}
		else if (busfees==paid){
			printf("bus seat reserved");
		}
	}
	else {
			printf("sorry no seats are left");
	}
	}
    

