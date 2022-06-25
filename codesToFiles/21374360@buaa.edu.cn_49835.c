"""
2022-03-26 20:18:36
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1636 KB
Accepted | 1 * (39 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1636 KB


"""

#include<stdio.h>
int main()
{
	int n,i,k,j;
	int y,x[5]={0};
	
	scanf("%d\n",&n);
	char a,b,c;
	
	y=n*(n-1)/2; 
	for(i=1;i<y;i++)
	{
		scanf("%c %c %c\n",&a,&b,&c);
		if(b=='>')
		x[a-'A']++;
		
		if(b=='<')
		x[c-'A']++;
		}
		
//zuihouyizu	
		scanf("%c %c %c",&a,&b,&c);
		if(b=='>')
		x[a-'A']++;
		
		if(b=='<')
		x[c-'A']++;
		
/*	for(i=0;i<n;i++)
		{
			printf("%c:%d\n",i+'A',x[i]);
		}
*/
	int max1=0,max2=0,max3=0,max4=0,max5=0;
//diyizu

	for(i=n;i>0;i--)
		{
		
			for(k=i-1;k>0;k--)
				{
					if(x[i]>=x[k])
					max1=x[i];		
				}
		}
		
	
	for(j=0;j<n;j++)
		{
			if(x[j]==max1)
		{
			printf("%c:%d\n",j+'A',x[j]);
			x[j]=-1;}
			
		}
		
//dierzu
	
	if(x[0]+x[1]+x[2]+x[3]+x[4]==-n)
	return 0;
	
		for(i=n;i>0;i--)
		{
			for(k=i-1;k>0;k--)
				{
					if(x[i]>=x[k])
					max2=x[i];		
				}
		}
	for(j=0;j<n;j++)
		{
			if(x[j]==max2)
		
			{
					printf("%c:%d\n",j+'A',x[j]);
			x[j]=-1;}
		}
	//disanzu
	if(x[0]+x[1]+x[2]+x[3]+x[4]==-n)
	return 0;
		for(i=n;i>0;i--)
		{
			for(k=i-1;k>0;k--)
				{
					if(x[i]>=x[k])
					max3=x[i];		
				}
		}
	for(j=0;j<n;j++)
		{
			if(x[j]==max3)
		{
				printf("%c:%d\n",j+'A',x[j]);
			x[j]=-1;}
		}
	//disizu
	if(x[0]+x[1]+x[2]+x[3]+x[4]==-n)
	return 0;
		for(i=n;i>0;i--)
		{
			for(k=i-1;k>0;k--)
				{
					if(x[i]>=x[k])
					max4=x[i];		
				}
		}
	for(j=0;j<n;j++)
		{
			if(x[j]==max4)
			{
		printf("%c:%d\n",j+'A',x[j]);
			x[j]=-1;	}
		}
		
		//diwuzu
		if(x[0]+x[1]+x[2]+x[3]+x[4]==-n)
	return 0;
			for(i=n;i>0;i--)
		{
			for(k=i-1;k>0;k--)
				{
					if(x[i]>=x[k])
					max5=x[i];		
				}
		}
	for(j=0;j<n;j++)
		{
			if(x[j]==max5)
		{
			printf("%c:%d\n",j+'A',x[j]);
			x[j]=-1;	}
		}
	
	
	
	
	
	
	return 0;
}