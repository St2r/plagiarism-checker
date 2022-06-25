"""
2022-03-29 20:47:48
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    double n,s=1,a=1;
    scanf("%lf",&n);
    for(double i=1;i<=n;i++)
    {
	    a*=i;
	    if(a>1000000000000000)
	        break;
    	s+=1.00000000000000/a;
    //	if(s>=2.71828182845904)
    	//    break;
	}
	printf("%.14lf",s);
	return 0;
}