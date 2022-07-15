#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array itself
* @n: an element of an array
* owned by Lighte22
*/
void reverse_array(int *a, int n)
{
	int *j, i, aux, k;

	j = a;
	for (i = 0; i < n; i++)
		j++;
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *j;
		*j = aux;
		j--;
	}
}
