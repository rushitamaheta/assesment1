#include<stdio.h>
int main(){
	int item,n,qua,price,totalAmount = 0,amount;
	char wantMore;
	//do while loop for multiple time input
	do{
	
	// for menu
	printf("1.pizza\t\t\t price = 180rs/pcs\n");
	printf("2.Burger\t\t price = 100rs/pcs\n");
	printf("3.Dosa\t\t\t price = 120rs/pcs\n");	
	printf("4.Idli\t\t\t price = 50rs/pcs\n");

	printf("please enter your choise : ");
	scanf("%d",&item);
	//for select order
	switch(item)
	{
		case 1 :
			printf("\n\nyou have selected pizza.\n");
			if(item=1){
				 price = 180;
			}
			break;
			
    	case 2 :
			printf("\n\nyou have selected Burger.\n");
				if(item=2){
				 price = 100;
			}
			break;
		case 3 :
			printf("\n\nyou have selected Dosa.\n");	
				if(item=3){
				 price = 120;
			}
			break;
		case 4 :
			printf("\n\nyou have selected Idli.\n");
				if(item=4){
				 price = 50;
			}
			break;
			
		default:
			printf("\n\nyou have selected wrong no.\n");
			break;
	}
	//quantity from user 
	printf("Enter the quantity :");
	scanf("%d",&qua);
	//calculating amount
 	amount = qua*price;
 	printf("amount : %d",amount);
 	//calculating total amount
    totalAmount = totalAmount+amount;
 	printf("\ntotal amount is = %d \n", totalAmount);
 	
 	//for more orders
 	printf("Do you want to select more items? (y/n): ");
        scanf(" %c", &wantMore);
 	 	
 }
//condition for more orders
 while(wantMore == 'y' || wantMore == 'Y');
 

 }

	

