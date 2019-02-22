/*

 ============================================================================

 Name        : hw3.c

 Author      : Oscar Bedolla

 Version     :

 Copyright   : Your copyright notice

 Description :geo calc

 ============================================================================

 */

#include <stdio.h>

void Choice();

int main(int argc,char **argv){

	Choice();

	return 0;

}



void Choice()

{



	int i;

	double radius;

	double pi=3.14159;

	double length;

	double width;

	double base;

	double height;



printf("Geometry Calculator\n");

printf("\t1. Calculate the Area of a Circle");

printf("\n\t2. Calculate the Area of a Rectangle");

printf("\n\t3. Calculate the Area of a Triangle");

printf("\n\t4. Quit");

fflush(stdout);  //ECLIPSE BUGg

scanf("%d", &i);

switch(i){

case 1:

	printf("Enter radius: ");
	fflush(stdout);  //ECLIPSE BUG
	scanf("%lf", &radius);

		while(radius<0){

		printf("negatives not accepted try again\n");

		printf("Enter radius: ");
		fflush(stdout);  //ECLIPSE BUG

		scanf("%lf", &radius);

		}

		double area=radius*radius*pi;

		printf("The Area of your circle is: %lf", area);

	 break;

case 2:

		printf("Enter length: ");
		fflush(stdout);  //ECLIPSE BUG

		scanf("%lf", &length);
		while(length<=-1){
			printf("negatives not accepted try again\n");
						printf("Enter length: ");
						fflush(stdout);  //ECLIPSE BUG
							scanf("%lf", &length);
		}
		printf("Enter width: ");
				fflush(stdout);  //ECLIPSE BUG

				scanf("%lf", &width);
		while(width<=-1){
					printf("negatives not accepted try again\n");
								printf("Enter width: ");
								fflush(stdout);  //ECLIPSE BUG
									scanf("%lf", &width);
				}



			double area1=length*width;

			printf("The Area of your Rectangle is: %f", area1);

			break;

case 3:
	printf("Enter base: ");
			fflush(stdout);  //ECLIPSE BUG

			scanf("%lf", &base);
			while(base<=-1){
				printf("negatives not accepted try again\n");
							printf("Enter base: ");
							fflush(stdout);  //ECLIPSE BUG
								scanf("%lf", &base);
			}
			printf("Enter height: ");
					fflush(stdout);  //ECLIPSE BUG

					scanf("%lf", &height);
			while(height<=-1){
						printf("negatives not accepted try again\n");
									printf("Enter height: ");
									fflush(stdout);  //ECLIPSE BUG
										scanf("%lf", &height);
					}


				double area2=base*height*.5;

				printf("The Area of your Triangle is: %lf", area2);

			 break;

case 4:

	return;

			break;

default :

	printf("Invalid number try again\n");

	Choice();

	break;





		}}
