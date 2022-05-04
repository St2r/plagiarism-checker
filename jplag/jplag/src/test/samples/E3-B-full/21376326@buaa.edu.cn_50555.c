"""
2022-03-28 17:58:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int i,n,input,a;//思考为什么不在这里定义b=1 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&input);
	int b=0;//之前这一行是写在第四行的，导致无论是什么数只要是最后一个输入就会No，助教说要每次读input把b清零，故b只能放在循环前。 
	 for(a=1;a<input;a++)
	 { if (a*a==input) b=b+2*a;
	  else if(input%a==0) b=b+a; 
	 }
	 if(b==input)
	 printf("YES\n");
	 else printf("NO\n");	
	}
	return 0;
}