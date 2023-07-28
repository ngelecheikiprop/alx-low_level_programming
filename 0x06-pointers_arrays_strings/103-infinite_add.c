char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int sum;

	if (len1 + len2 >= size_r)
		return (0)i;
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
	for (int l = 0, r_idx = k - 1; l < r_idx; l++, r_idx--) {
          char temp = r[l];
          r[l] = r[r_idx];
 r[r_idx] = temp;

	}
	r[k] = '\0'; // Null-terminate the result
    return r;
}
