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
scanf("%d", &i);
switch(i){
case 1:
	printf("Enter radius: ");
	scanf("%lf", &radius);
	if(radius<=-1)
	{
		printf("negatives not accepted try again\n");
		printf("Enter radius: ");
			scanf("%lf", &radius);
	}
		double area=radius*radius*pi;
		printf("The Area of your circle is: %lf", area);
	 break;
case 2:
		printf("Enter length: ");
		scanf("%lf", &length);
		printf("Enter width: ");
		scanf("%lf", &width);
		if(length<=-1 || width<=-1)
		{
			printf("negatives not accepted try again\n");
			if(length<=-1)
			{
			printf("Enter length: ");
				scanf("%lf", &length);}
			else{
				printf("Enter width: ");
				scanf("%lf", &length);
			}
		}

			double area1=length*width;
			printf("The Area of your Rectangle is: %f", area1);
			break;
case 3:
			printf("Enter base: ");
			scanf("%lf", &base);
			printf("Enter height: ");
			scanf("%lf", &height);
			if(base<=-1 || height<=-1)
			{
				printf("negatives not accepted try again\n");
				if(base<=-1)
				{
				printf("Enter base: ");
					scanf("%lf", &base);}
					printf("Enter height: ");
					scanf("%lf", &base);

			}
			else{
				double area2=base*height*.5;
				printf("The Area of your Triangle is: %lf", area2);
			} break;
case 4:
	return;
			break;
default :
	printf("Invalid number try again");
	Choice();
	break;


		}}


