"""
2022-03-27 20:21:16
TLE
0.6
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 16 ms | 1620 KB
Accepted | 1 * (2 / 10) | 10 ms | 1612 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 888 KB

"""

#include <stdio.h>

int main()
{
    int n,a,b,i;

    scanf("%d",&n);

    while (n--)
    {
       scanf("%d\n",&a);


       for(b=0,i = 0;i < a; i++)

       {
           if (a%i==0){

                b = a + b;
                printf("YES\n");

           }

           else{
            printf("NO\n");
           }


       }
    }





}