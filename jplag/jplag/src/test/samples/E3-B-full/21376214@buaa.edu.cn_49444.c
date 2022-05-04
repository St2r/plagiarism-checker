"""
2022-03-26 13:29:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 8 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1560 KB

"""

#include<stdio.h>
int main()
{
	int a,b,i=0; 
    int n;
    scanf("%d",&n);
	while(n--){
	scanf("%d",&a);
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		i=i+b;
    }
	
	if(i==a)
	printf("YES\n");
	else
	printf("NO\n");
	i=0;}



	return 0;
	
}