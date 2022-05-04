"""
2022-03-29 00:50:53
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1616 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1612 KB

"""

int main()
{
    int n,i=0,j=1,a,sum=0;	
	scanf("%d",&n);
    for(;i<n;i++)
    {
    	scanf("%d",&a);
		for(j=1,sum=0;j<a;j++)
		{
			if(a%j==0)
			sum+=j;
		}
			
	
    if(sum==a)
    	printf("YES\n");
         else
        printf("NO\n");
		

	}	
	return 0;
}