"""
2022-03-26 19:23:40
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>
#include<math.h>
int main()
{
//int n;
//scanf("%d",&n);
//int a[1001];
//
//int cnt = 0;
//
//for(int i=1;i<=n;i++)scanf("%d",&a[i]);
//
//for(int j=1;j<n;j++)
//{
//	for(int k=j+1;k<=n;k++)
//	{
//		if(a[j]>=a[k])cnt++;
//		
//	
//	}
//
//}  
//
//  printf("%d",cnt);
//  




//int s;
//
//scanf("%d",&s);
//
//
//int n;
//int a[100]={0};
//int cnt;
//for(int j=0;j<s;j++)
//{
//	scanf("%d",&n);
//	a[0]=1;
//	cnt=1;
//	for(int i=2;i<=(n/2)+1;i++)
//	{
//	if(n%i==0)
//	{
//	a[cnt]=i;
//	cnt++;	
//	}
//	}
//
//int add=0;
//for(int k=0;k<cnt;k++)add+=a[k];
//
//if(add==n)printf("YES");
//else printf("NO");
//printf("\n");
//
//}

long long int n;

scanf("%lld",&n);

if(n>18ull)n=18ull;

double g =0.0 ;

double a[19];

a[0]=1.0;

long long int m=1ull;

for(int i=1ull;i<=n;i++)
{
	m*=i;
	a[i]=1.0/m;
	
}

for(int i=0ull;i<=n;i++)g+=a[i];

printf("%.14f",g);

return 0;
}