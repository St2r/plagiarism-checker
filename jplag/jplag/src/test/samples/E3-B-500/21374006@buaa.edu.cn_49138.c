"""
2022-03-29 16:37:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1552 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
    int n,i,x,sum=0;
    scanf("%d",&n);//输入需要判断的数的总数
    int a[105]={0};
    int b[105]={0};
   for(i=0;i<n;i++)//输入需要判断的n个数
   {
        scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)//判断所有数是否为完全数
    {
        for(x=1;x<=0.5*a[i];x++)//分解a[i]的质因数并求和
        {
            if(a[i]%x==0)
            {
                sum =sum+x;
            }
        }
        if(sum==a[i])//如果a[i]是完全数，记为1
        {
            b[i]=1;
            sum=0;
        }
         else//如果a[i]不是完全数，记为0
         {
            b[i]=0;
            sum=0;
         }
     }
    for(i=0;i<n;i++)//对所有数的判断结果进行输出
    {
        if(b[i]==1)
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