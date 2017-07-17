// Codeup.kr 2631 Problem
#include <stdio.h>
int arr[100000], n, k, count=0;

// 배열 더해주는 함수
int hap(int a, int b)
{
	int result = 0;
	for(int i = a; i < b; i++)
		result+=arr[i];
	
	return result;	
}

// 계산 함수
int solve(int s, int e)
{
	// m = 중간값
	int m = (s+e)/2;
	
	// 더 이상 탐색할 정보가 없을 때.
	if(s/e==0)
		return count;
	
	// 중간값이 k 일 때, e값을 1 내리고 나머지는 버린다.
	if(arr[m]==k)
	{
		count++;
		return solve(s,m-1);
	}
	// s부터 m까지의 합이 k 일 때, 종료한다.
	else if(hap(s,m)==k)
	{
		count++;
		return count;
	}
	// s부터 m까지의 합이 k보다 클 때, m을 다시 반 나눈다.
	else if(hap(s,m)>k)
		return solve(s,m/2);
	// s부터 m까지의 합이 k보다 작을 때, 남은 반 배열을 이용한다.
	else if(hap(s,m)<k)
		return solve(s+m,m*2);
	
}

int main()
{
	scanf("%d %d",&n,&k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	if(hap(0,n) == k)
		printf("1");
		
	else
		printf("%d",solve(0,n-1));
	
	return 0;
}
