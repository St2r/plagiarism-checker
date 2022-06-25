"""
2022-03-26 16:52:41
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1672 KB
Accepted | 1 * (1 / 10) | 18 ms | 1668 KB
Accepted | 1 * (2 / 10) | 11 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 15 ms | 1656 KB

"""

/* 
 Author: 梁德超(49515)
 Result: WA	Submission_id: 4235237
 Created at: Sat Mar 26 2022 16:48:45 GMT+0800 (China Standard Time)
 Problem: 5450	Time: 10	Memory: 1656
*/

#include<stdio.h>
int main()
{
	int n;
        long long sum=1;
	double p=1;
	scanf("%d",&n);
	if(n<20)
    {
	   for(int i=1;i<=n;i++)
	   {
		sum=sum*i;
		p=p+1.0/sum;
	   }
    }
	if(n>=20)
	{
		for(int j=1;j<=20;j++)
		{
			sum=sum*j;
		    p=p+1.0/sum;
		}
	}
	printf("%.14f",p);
	return 0;
}
