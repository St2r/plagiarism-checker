"""
2022-03-29 19:56:51
WA
0.0
Wrong Answer | 0 * (5 / 100) | 393 ms | 1580 KB
Wrong Answer | 0 * (35 / 100) | 401 ms | 1524 KB
Wrong Answer | 0 * (60 / 100) | 401 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int a=2,b,i=0; 
	while(a<=10000)
	{
	
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		i=i+b;
    }
	
	if(i==a)
	printf("%d\n",a);
	
	a++;
	i=0;
	}
	return 0;
	
}