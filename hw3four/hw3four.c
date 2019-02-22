/*
 * hw3four.c
 *
 *  Created on: Feb 21, 2019
 *      Author: oskrrrt
 */
#include <stdio.h>
void reverse(int[],int);
int main()
{
	int size=0;
	int numbers;
	int num;
	printf("what size do you want the array? ");
		fflush(stdout);  //ECLIPSE BUG
	scanf("%d",&size);
	int array [size];
	printf("What numbers would you like?");
	fflush(stdout);  //ECLIPSE BUG
	for(int i=0;i<size;i++)
	{
		printf("What number would you like?\n");
		printf("Value %d: ",i+1);
		scanf("%d", &num);
		fflush(stdout);  //ECLIPSE BUG
		array[i]=num;

	}
	for(int j=0;j<size;j++)
	{
		printf("%d", array[j]);
	}
	reverse(numbers, size);
	return 0;

}
void reverse(int numbers[],int size)
{
int*numPtr;
for(int i=0;i<size;i++)
{
	numPtr--;
	printf(*numPtr);
}
}
