"""
2022-03-26 18:32:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 3 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1620 KB

"""

#include <stdio.h>

int main()
{
	int n,a[105],b,c=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{ c=0;
	  b=a[i]-1;
	  while(b>0)
	 {
		if(a[i]%b==0)
		c=c+b;		
		b--;
	 }
	if(a[i]==c)
	printf("YES\n");
	else 
	printf("NO\n");

	}
	return 0; 
}