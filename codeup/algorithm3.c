// Codeup/kr 4514 Problem
#include <stdio.h>

int arr[300], hap[150]={NULL,}, n, m, count = 0;

int solve()
{
	int max = n - (m-1) * 2;

	for(int i = 0; i < n - max; i+=2)
	{
		for(int j = 0; j < max; j++)
			hap[count] += arr[j+i];
		count++;
	}
	return plus();

}

int plus()
{
	int M = hap[0];
	for(int i = 0; i < 150 ;i++)
	{
		if(hap[i] == NULL)
			return M;
		if(M>hap[i])
			M = hap[i];
	}
	return M;
}

int main()
{
	scanf("%d %d",&n,&m);

	for(int i = 0; i < n; i++)
		scanf("%d",&arr[i]);

	printf("%d",solve());

	return 0;
}