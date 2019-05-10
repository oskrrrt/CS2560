#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	//declarations
	int size;


	//user input
	printf("enter size of array( amount of rows by columns:");
	scanf("%d", &size);

	int array[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = (i + 1)*(j + 1);
		}
	}

	for (int i = 0; i < size; i++) {
		if (i == 0) {
			printf("\t\t %d", i + 1);
		}
		else {
			printf("\t\t %d", i + 1);
		}
	}
	for (int i = 0; i < size + 1; i++) {
		if (i == 0) {
			printf("\n  +");
		}
		else {
			printf("---------");
		}
	}

	printf("\n");
	int row;

	for (int i = 0; i < size; i++) {
		row++;

		for (int j = 0; j < size; j++) {
			if (j == 0 && row < size + 1) {

				printf("\n%d |  \t %d", row, array[i][j]);
			}
			else if (j == 0 && row >= size + 1) {
				printf("\n%d |   \t %d", row, array[i][j]);

			}
			else {
				printf("  \t %d", array[i][j]);
			}
		}
	}
	return 0;


}

