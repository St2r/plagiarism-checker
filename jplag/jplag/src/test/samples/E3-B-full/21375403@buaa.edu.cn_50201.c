"""
2022-03-26 17:00:26
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2036 KB
Accepted | 1 * (35 / 100) | 3 ms | 1944 KB
Accepted | 1 * (60 / 100) | 7 ms | 2104 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,k,a[101],m[101],sum=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  	scanf("%d",&a[i]);
  	m[i]=(int) sqrt(a[i]);
                         }
     for(j=1;j<=n;j++,sum=0){for(k=1;k<=m[j];k++){
     	if(a[j]%k==0)
     	{sum+=(a[j]/k+k);
		 }  if(m[j]*m[j]==a[j])
		 sum-=m[j];
		 }sum-=a[j];
		 if(sum==a[j])
		 printf("YES\n");
		 else printf("NO\n");
		
		 }

	return 0;
}