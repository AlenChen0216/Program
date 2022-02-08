#include <stdio.h>
#define L 5000
int main()
{
	int n, i, j, d[L+1]; 
	scanf("%d",&n);
	d[1]=1;
	for(i=2; i<=L; i++)
	{
		d[i]=0;
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=L; j++)
		{
			d[j]=d[j]*i;
		}
		//¶i¦ì 
		for(j=1; j<=4999; j++)
		{
			if(d[j]/10!=0)
			{
				d[j+1]=d[j+1]+(d[j]/10);

				d[j]=d[j]-(d[j]/10)*10;
			}
		}
	}
	for(j=5000; j>=1; j--)
	{
		if(d[j]!=0 )

		{j=j; break;}
	}
	for(i=j; i>=1; i--)
	{
		printf("%d",d[i]);
	}
} 
