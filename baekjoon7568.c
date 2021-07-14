#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	int n;
	int x[50] = { 0 }, y[50] = { 0 };
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		int level = 0;
		for (int j = 0; j < n; j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
			{
				level++;
			}
		}
		printf("%d ", level + 1);
	}
	
}

