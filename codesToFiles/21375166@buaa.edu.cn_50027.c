"""
2022-03-29 21:03:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1632 KB
Accepted | 1 * (4 / 10) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main(){int a,i,j,n;
double b=1,c=1;
scanf("%d",&n);
if(n<=1000){
for(i=1;i<=n;i++){for(j=i;j>0;j--){b=b/j;
}
c=c+b;
b=1;
}
printf("%.14f",c);}
else{
n=1000;
for(i=1;i<=n;i++){for(j=i;j>0;j--){b=b/j;
}
c=c+b;
b=1;
}
printf("%.14f",c);}
return 0;
}