"""
2022-03-26 11:23:00
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1652 KB
Accepted | 1 * (35 / 100) | 12 ms | 1588 KB
Accepted | 1 * (60 / 100) | 16 ms | 1616 KB

"""

#include<stdio.h>
int a[1000];
int main()
{
    int i,n,ou,jia,x=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ou=0;
        for(x=1;x<a[i];x++)
        {
            int b=a[i]%x;
            if(b==0)
            {
                ou+=x;
            }
         }
       // printf("%d\n",ou);
        //jia=ou;//printf("%d",jia);
        if(ou==a[i]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}