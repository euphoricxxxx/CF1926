#include<stdio.h>
void main()
{
	int t,n,i,j,count1=0,count0=0;
	scanf("%d",&t);
	while(t--)
	{    count1=0;count0=0;	
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++);
		scanf("%d",&a[i]);
		
		for(j=0;j<n;j++)
		{
			if(a[j]==1)
			count1++;
			else
			count0++;
		}
		if(count1>count0)
		printf("PUB-G\n");
		else if(count1<count0)
		printf("Fortnite\n");
		else
		printf("Fifty-Fifty\n");	
	}
}
