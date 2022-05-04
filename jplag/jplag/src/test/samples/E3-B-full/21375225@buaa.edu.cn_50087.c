"""
2022-03-26 15:22:26
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 3 ms | 1640 KB

"""

#include<stdio.h>

int main()
{
	int n,a,b,i,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
	scanf("%d",&a);
	int sum=1;
	for(i=2;i<a;i++){
	b=a%i;
	if(b==0){
	sum=sum+i;
	}	
}if(sum==a){
	printf("YES\n");
}else{
	printf("NO\n");
}
		
}
	  
	
	
}