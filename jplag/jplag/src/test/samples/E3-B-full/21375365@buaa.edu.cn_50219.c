"""
2022-03-29 20:34:38
CE
0.0
main.c: In function 'main':
main.c:11:19: error: lvalue required as left operand of assignment
         {if(j%a[i]=0)
                   ^
main.c:5:3: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
   scanf("%d",&n);
   ^~~~~~~~~~~~~~
main.c:7:6: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
     {scanf("%d",&a[i]);
      ^~~~~~~~~~~~~~~~~


"""

#include <stdio.h>
#include<math.h>
int main()
{ int n,i,a[100],j,sum=0;
  scanf("%d",&n);
for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
    {for(j=1;j<n;j++)
        {if(j%a[i]=0)
             sum+=j;
        }
        if(sum==a[i])
            printf("YES");
        else  printf("NO");
    }
return 0;
}