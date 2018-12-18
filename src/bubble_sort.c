
// Author : Maxime KERMARQUER
// Mail : maxime.kermarquer@gmail.com
// This little program illustrates the bubble sort.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display an integer vector
void display_vector(int* v, int s)
{
	int idx;
	printf("[");
	for (idx = 0; idx < s; idx++)
	{
		printf("%d", v[idx]);

		// To separate the values with a comma
		if(idx != s-1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}

int main(int argc, char const *argv[])
{


	printf("--- Bubble sort ---\n");


	// Variables
	int* vector;
	int vector_size;
	int i;
	int change = 1;
	int tmp;
	int step = 1;

	// For the random
	srand(time(NULL));

	// Check arguments
	if (argc > 1)
	{
		vector_size = atoi(argv[1]);
	}
	else
	{
		vector_size = 5;
	}


	// Vector allocation 
	vector = (int *) malloc (vector_size * sizeof(int));

	// Fill the vector with random values between 1 and 10
	for (i = 0; i < vector_size; i++)
	{
		vector[i] = rand()%10;
	}


	printf("Initial vector : ");
	display_vector(vector, vector_size);


	// Bubble sort

	while (change)
	{
		change = 0;
		for (i = 0; i < vector_size-1; i++)
		{
			if(vector[i] > vector[i+1])
			{
				change = 1;
				tmp = vector[i];
				vector[i] = vector[i+1];
				vector[i+1] = tmp;
			}
		}
		if (change)
		{
			printf("Step %d : ",step); step++;
		}
		else
		{
			printf("Final step : ");
		}
		display_vector(vector, vector_size);
	}
	

	return 0;
}