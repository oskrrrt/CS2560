/*
 ============================================================================
 Name        : Cmid2560.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : multiplication table
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) {
	int array [10][10];
	for(int i =0;i<10;i++)
	{
		array[0][i]=(1)*(i+1);
	}
	//for(int i =1;i<10;i++)
	//{
	//	array[1][i+1]=(i+1)*(i+2);	}

	printf("\t10 by 10 Multiplication Table\n");
	printf("\n    1    2    3    4    5    6    7    8    9    10");
	printf("\n+---------------------------------------------------");
	//for(int i=0;i<10;i++)
	//	{
		//	printf("%d",i+1);
	//		for(int j=0;j<10;j++)
		//	{
			//	printf(array[i][j]);
			//}


	for(int i =0;i<10;i++){
	printf("\n%d| ", i+1);
	for(int j=0;j<10;j++){
		printf("%d    ", array[0][j]);
	}
	}


}
