"""
2022-03-26 09:39:16
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1668 KB
Accepted | 1 * (60 / 100) | 16 ms | 1588 KB

"""

#include<stdio.h>
int main()
{
    int n;

    int a[100];

    int s=0;

    int j;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }

    for(int i=0;i<n;i++)
    {

        s=0;

        for(j=1;j<a[i];j++)

        {
            if(a[i]%j==0)
            {

              s=s+j;

            }

        }



    if(s==a[i])
    {

        printf("YES\n");


    }

    else
    {


        printf("NO\n");


    }

    }




    return 0;
}