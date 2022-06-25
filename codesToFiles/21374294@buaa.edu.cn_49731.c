"""
2022-03-26 09:46:43
AC
1.0
nan
"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define eps 1e-10

double jie(int num)
{
    int res=1;
    for(int i=2;i<=num;i++)
        res*=i;
    return res;
}
int main()
{
    int n;
    double sup=2.0;
    scanf("%d",&n);
    if(n>17) n=17;
    for(int i=2;i<=n;i++)
        sup+=1/jie(i);
    printf("%.14f\n",sup);
    return 0;
}