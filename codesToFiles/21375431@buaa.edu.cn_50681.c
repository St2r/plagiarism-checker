"""
2022-03-29 22:43:44
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

# include <stdio.h>
# include <math.h>
int main()
{
  long long int i,n,fat;               
  double sum,dor;
  double E=2.71828182845905,eps=5e-15;
  fat=1;      
  sum=1;                                      
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
        fat=fat*i;          
        dor=1.0/fat;
        sum+=dor;
        if(fabs(E-sum)<=eps)
        {
        	break;
		}
  }
 printf("%.14f",sum);
return 0;
}