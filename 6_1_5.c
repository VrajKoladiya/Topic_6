#include<stdio.h>

main()
{
	int i, n;
	
	printf("Enter the first number: ");
	scanf("%d",&i);
	
	printf("Enter the second number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i % 4 == 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
