#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void bubble(float* arr, int N)
{
	float tmp;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-i-1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	float a[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		a[i] = rand();
		printf("%d - %f\n", i, a[i]);
	}
	bubble(a, 10);
	printf("sortirovka:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%f\n",a[i]);
	}
	return 0;
}