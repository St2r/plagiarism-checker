"""
2022-03-27 08:47:43
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2048 KB
Accepted | 1 * (35 / 100) | 2 ms | 2092 KB
Accepted | 1 * (60 / 100) | 3 ms | 2076 KB

"""

#include<stdio.h>
#include<math.h>
#define M 10010
int a[M];
/*int m(int x)
{
	int i,s=0;
	for(i=1;i<(x/2);++i)
	{
		if(x%i==0)
		{
			s+=i+(x/i);
		}
	}
	if(s==x)
	printf("YES");
	else
	printf("NO");
}*/
int main()
{
	int n,i,j,s=0;
	double l;
    scanf("%d",&n);
    for(j=0;j<n;++j)
    {
    	scanf("%d",&a[j]);
    	a[j]=(double)a[j];
    	l=sqrt(a[j]);
    	for(i=1;i<=(int)l;++i)
	{
		if(a[j]%i==0)
		{
			s+=i+(a[j]/i);
			//printf("%f %d\n",l,a[j]/i);
		}
	}
	//printf("%d\n",s);
	if((s-a[j])==a[j])
	printf("YES\n");
	else
	printf("NO\n");
	s=0;
	}
 }