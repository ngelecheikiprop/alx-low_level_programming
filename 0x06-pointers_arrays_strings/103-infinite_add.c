#include "main.h"
/**
  *infinite_add -  adds two numbers
  *@n1:ff
  *@n2:ff
  *@r:ff
  *@size_r:rr
  *
  *Return:char
  */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int sum;
	char temp;
	int l;


	if (len1 + len2 >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		r[k] = '0' + (sum % 10);
		k++;
	}
	for (l = 0, r_idx = k - 1; l < r_idx; l++, r_idx--)
	{
		temp = r[l];
		r[l] = r[r_idx];
		r[r_idx] = temp;

	}
	r[k] = '\0';
	return (r);
}
