"""
2022-03-27 17:06:29
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 2 ms | 1648 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    while(~scanf("%d",&m))
    {if(m==6||m==28||m==496||m==8128)
      {printf("YES\n");
   }
   else
   {printf("NO\n");
   }
}
	return 0;
}