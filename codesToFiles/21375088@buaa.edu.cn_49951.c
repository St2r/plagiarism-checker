"""
2022-03-29 20:04:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
 int n;
 double sum = 1, temp = 1;
 scanf("%d", &n);
    if(1<=n&&n<=17){
 for (int i = 1; i <= n; i++)
 {
     
  temp *= i;
  sum += 1.0 / temp;
 }
        printf("%.14lf",sum);}
    else
    {
        for (int i = 1; i <= 17; i++)
        {
            
         temp *= i;
         sum += 1.0 / temp;
        }printf("%.14lf",sum);}
 return 0;
}