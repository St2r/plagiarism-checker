"""
2022-03-29 20:31:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1744 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,a,sum=0;
	scanf("%d",&n);
	for(j=0;j<n;j++){	
	   scanf("%d",&a);
       for(i=1,sum=0;i<a;i++){
	    if(a%i==0){
	    sum=sum+i;
		}
	}
	    if(sum==a)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}