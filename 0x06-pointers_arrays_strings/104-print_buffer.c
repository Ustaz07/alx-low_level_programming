#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i;

	for (i = size_r - 2; i >= 0; i--)
	{
		int sum = carry + (n1[i] - '0') + (n2[i] - '0');
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}

	r[size_r - 1] = carry + '0';

	return (r);
}
