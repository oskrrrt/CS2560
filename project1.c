/*
 ============================================================================
 Name        : project1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int menu();
void seatMap();
int rows=15;
int columns=30;
char key [rows][columns];
char FULL='*';
char EMPTY='*';

int main(int argc,char **argv) {

	//set price array
	float prices[15];
		float price=0;
		printf("Set the prices for the rows\n");
		for(int i=0;i<=14;i++)
		{
		printf("Row %d: %f",i+1, &price);
		fflush(stdout);  //ECLIPSE BUG
		scanf("%f", &price);
		prices[i]=price;

		}for(int i=0;i<=14;i++)
		{printf("%d",i);

for(int i=0;i<rows;i++)
{
	for(int j=0;j<columns;j++)
	{key [i][j]=EMPTY;}
}
int option;
option=menu();

switch(option)
{
case 1:
	printf("SEAT PRICES BY ROW\n");
	for(int i=0;i<rows;i++)
	{
	printf("Row %d:%f", i+1, prices[i]);
	}
	break;
case 2:
	int trow,tcol;
	printf("Purchase Ticket(s)\n");
	printf("Select which row: ");
	fflush(stdout);
	scanf(%d, &trow);

	printf("Select which column: ");
		fflush(stdout);
		scanf(%d, &tcol);
		if(key [trow][tcol]=='*')
		{
			printf("SOLD OUT")
		}
		else
		{
			int YN;
			float cost=prices[trow];
			float total=total+cost;
			printf("Price: %f", cost);
			printf("Would you like to buy?(type 1 for yes or 2 for no)");
			fflush(stdout);  //ECLIPSE BUG
			scanf(%d, &YN);
			if(YN==1)
			{
			printf("ticket bought");
			key [trow][tcol]=FULL;
			}
			else if(YN==2)
			{
				return 0;
			}
		} break;
case 3:
	printf("View seats")
	seatMap();
	break;

case 4:
	printf("total sales")
	//add total
	break:

case 5:
	printf("quitting ");
	return 0;
	break;

default:
	printf("invalid #")
}

return 0;
}

//map key
void seatMap()
{
	printf("SEAT MAP\n");
	printf(" 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n");
	for(int count=0;count<15;count++)
	{
		printf("Row %d",count+1);
		for(int count2=0;count2<30;count2++)
		{
			printf(key[count][count2]);
		}
	}
}

//switch menu
int menu()
{
	int choice;
	printf("1. Seat Prices:\n");
	printf("2. Purchase Seat(s):\n");
	printf("3. Available Seats:\n");
	printf("4. Total Ticket Sales:\n");
	printf("5. Exit\n");
	fflush(stdout);//bug
	scanf("%d",&choice);
	return choice;
}
