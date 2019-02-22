/*
 * hw3two.c
 *
 *  Created on: Feb 21, 2019
 *      Author: oskrrrt
 */
#include <stdio.h>
int main(int argc,char **argv){
	double pop, birth, death, years, newPop;
	printf("What is the starting size population? ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &pop);
	while(pop<2)
		{printf("Starting size must be 2 or more try again\n");
	printf("What is the starting size population? ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &pop);}

	printf("What is the annual birth rate? ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &birth);
	while(birth<0)
	{
		printf("Annual birth rate must be a positive number try again");
			printf("\nWhat is the annual birth rate? ");
			fflush(stdout);  //ECLIPSE BUG
			scanf("%lf", &birth);
	}
	printf("What is the annual death rate? ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &death);
	while(death<0)
		{
			printf("Annual death rate must be a positive number try again");
				printf("\nWhat is the annual death rate? ");
				fflush(stdout);  //ECLIPSE BUG
				scanf("%lf", &death);
		}
	printf("Enter years to display: ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &years);
	while(years<1)
		{
			printf("number of years must be more 1 or more, try again");
				printf("\nWhat is the number of years? ");
				fflush(stdout);  //ECLIPSE BUG
				scanf("%lf", &years);
		}

	printf("Starting population: ");

	for(int i=1;i<=years;i++)
	{
		newPop=pop*(birth-death);
		printf("\nYear %d:%.2lf", i, newPop);
		pop=newPop;

	}

}
