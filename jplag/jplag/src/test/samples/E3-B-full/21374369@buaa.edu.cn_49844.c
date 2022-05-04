"""
2022-03-29 20:52:58
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 0 ms | 1736 KB

"""

#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int i=0,j;
for(i=0;i<n;i++)
{
	scanf("%d",&j);

int a,b=1;
for(a=2;a*a<=j;a++)
{
	if(j%a==0){
		if(a*a!=j)
		b+=(a+j/a);
		else
		b+=a;
	}
}
if(b==j)
printf("YES\n");
else
printf("NO\n");}
    return 0;
	}