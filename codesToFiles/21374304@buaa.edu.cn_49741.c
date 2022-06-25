"""
2022-03-29 23:59:17
CE
0.0
main.c:1:7: error: expected '=', ',', ';', 'asm' or '__attribute__' before '<' token
 nclude<stdio.h>
       ^
main.c: In function 'main':
main.c:6:2: warning: implicit declaration of function 'scanf' [-Wimplicit-function-declaration]
  scanf("%d",&n);
  ^~~~~
main.c:6:2: warning: incompatible implicit declaration of built-in function 'scanf'
main.c:6:2: note: include '<stdio.h>' or provide a declaration of 'scanf'
main.c:18:2: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
  printf("%.14f",&b);
  ^~~~~~
main.c:18:2: warning: incompatible implicit declaration of built-in function 'printf'
main.c:18:2: note: include '<stdio.h>' or provide a declaration of 'printf'
main.c:18:18: error: 'b' undeclared (first use in this function)
  printf("%.14f",&b);
                  ^
main.c:18:18: note: each undeclared identifier is reported only once for each function it appears in


"""

nclude<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=1;
		while(n>=1)
		{
			a=n*a;
			n=n-1;
		}
		double b=0;
		b=1/a+b;
	}
	printf("%.14f",&b);
	return 0;
	
}