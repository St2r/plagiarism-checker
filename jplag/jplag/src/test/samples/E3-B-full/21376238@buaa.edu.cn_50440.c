"""
2022-03-26 13:14:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 3 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i;

	scanf("%d",&n);
while(n--){
	scanf("%d",&a);
		int b=0;
	for(i=1;i<a;i++)
	 {
	 if(a%i==0)
	  b+=i;
     }
	if(a==b)
	printf("YES\n");
	else
	printf("NO\n"); 	
}
return 0;
}