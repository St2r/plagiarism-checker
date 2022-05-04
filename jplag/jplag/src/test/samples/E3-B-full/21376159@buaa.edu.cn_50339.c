"""
2022-03-29 23:34:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1568 KB

"""

#include<stdio.h>
int main()
{
    void wo(int q);
int n,a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
for(int e=0;e<n;e++)
    wo(a[e]);




return 0;
}
void wo(int q)
{
    int j,s=0;

    for(j=1;j<q;j++)
        if(q%j==0)
        s+=j;
    if(s==q)
        printf("YES\n");
    else
        printf("NO\n");

}