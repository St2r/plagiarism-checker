"""
2022-03-29 23:41:14
CE
0.0
main.c: In function 'main':
main.c:6:12: warning: format '%d' expects argument of type 'int *', but argument 2 has type 'long long int *' [-Wformat=]
  scanf("%11d",&n);
         ~~~^  ~~
         %11lld
main.c:8:17: error: 'dum' undeclared (first use in this function); did you mean 'sum'?
  sum*=i;e=e+0.1/dum*10;
                 ^~~
                 sum
main.c:8:17: note: each undeclared identifier is reported only once for each function it appears in
main.c:6:2: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
  scanf("%11d",&n);
  ^~~~~~~~~~~~~~~~


"""

#include<stdio.h>
int main()
{
	long long int n,i,sum=1;
	double e=1;
	scanf("%11d",&n);
	if(n<50){for(i=1;i<=n;i++){
	sum*=i;e=e+0.1/dum*10;
	 
	}
}
if(n>=50){for(i=1;i<=20;i++){
	sum*=1;
	e=e+0.1/sum*10;
}
}
printf("%.14f",e);
	return 0;
}