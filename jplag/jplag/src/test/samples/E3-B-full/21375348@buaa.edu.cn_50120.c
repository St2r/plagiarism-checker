"""
2022-03-27 14:30:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);}
      for(int i=0;i<n;i++)
       {


        int S=0;
        for(int j=1;j<A[i];j++)
        {
         if(A [i]%j==0)
         {
             S=S+j;
         }
        }

        if(S==A[i]){printf("YES\n");}
        else{printf("NO\n");}
    }
    return 0;
}