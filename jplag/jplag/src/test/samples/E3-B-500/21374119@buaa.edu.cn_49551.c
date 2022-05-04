"""
2022-03-29 20:11:58
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1696 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

# include <stdio.h> 
int main()
 { 
 int n,i,j,a,sum; 
 scanf("%d\n",&n); 
for(i=0;i<n;i++) { 
sum=1; 
scanf("%d",&a);
 for(j=2;j<=a/2;j++) {
  if(a%j==0) {
   sum=sum+j;
  }
   }
    if(sum==a) 
	{ 
	printf("YES\n");
} 
	 if(sum!=a) {
	  printf("NO\n"); 
	  } 
	  } 
	  return 0;
	   }