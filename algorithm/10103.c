/*
#include <stdio.h>

int main()
{
	int n, cr = 0, sr = 0;
	int c[15], s[15];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &c[i], &s[i]);
	}

	for (int i = n; i < 15; i++)
	{
		c[i] = '\0';
		s[i] = '\0';
	}

	for (int i = 0; i < n; i++)
	{
		if (c[i] < s[i])
			cr += s[i];
		else if (s[i] < c[i])
			sr += c[i];
	}

	printf("%d\n", 100 - cr);
	printf("%d", 100 - sr);

	return 0;
}
*/