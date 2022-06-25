"""
2022-03-28 20:53:08
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include<stdio.h>
int main()
{int d,n;
scanf("%d",&d);
if(d<=20)
n=d;
else{
n=20;
}
double c=1;
double a[21];
for(int i=0;i<n;i++){
	c=c*(i+1);
	a[i]=c;
}
double b=1;
for(int m=0;m<n;m++){
	b=b+1/a[m];
}
printf("%.14f",b);	
return 0;
}