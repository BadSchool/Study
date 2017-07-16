// Codeup.kr 2631 Problem
#include <stdio.h>

int arr[10000], n, k, count = 0;

int solve(int s, e)
{
	int m = (s+e)/2;

	for(int i = 0; i < n; i++)
	{
		if(e==0)
			return count;
	
		
	}
}

void main()
{
	scanf("%d %d", &n, &k);

	for(int i = 0; i < n; i++)
		scanf("%d",arr[i]);

	print("%d",solve(0,n-1));
}