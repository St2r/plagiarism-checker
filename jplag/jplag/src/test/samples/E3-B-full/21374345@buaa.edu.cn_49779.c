"""
2022-03-26 16:52:06
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1940 KB
Accepted | 1 * (35 / 100) | 7 ms | 2104 KB
Accepted | 1 * (60 / 100) | 3 ms | 2028 KB

"""

#include <stdio.h>
#include <string.h>
#include<math.h>

int a[101]={0};
int comp(int);
int main() {

    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(comp(a[i]))
	printf("YES\n");
	else
	printf("NO\n");
	}

	
	   return 0;
}
int comp(int m){
	int i,x=m,sum=1;
	if(x==1)
	return 0;
	else
	{
	int r=sqrt(x);
	for(i=2;i<=r;i++)
	{	
		if(x%i==0)
		sum=sum+i+x/i;
		
	}
	if(r*r==x)
	sum=sum-r;
	
	if(sum==x)
	return 1;
	else
	return 0;
		
	}

}