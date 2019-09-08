#include<bits/stdc++.h>
int main()
{
	int i,n,a;
	a=i=1;
	scanf("%d", &n);
	while(i<=n)
	{
		a *= i;
		i++;
	}
	printf("\n%d! = %d", n, a);
	
	return 0;
}

