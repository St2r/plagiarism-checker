"""
2022-03-26 17:15:20
AC
1.0
Accepted | 1 * (1 / 4) | 11 ms | 1704 KB
Accepted | 1 * (1 / 4) | 3 ms | 1624 KB
Accepted | 1 * (1 / 4) | 7 ms | 1692 KB
Accepted | 1 * (1 / 4) | 12 ms | 1712 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	int n,a[1010],i,j,k,c[1010],sum,z;
	double b;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		k=1;
		sum=0;
		for(j=2;j<=(double)sqrt(a[i]);j++){
			b=1.0*a[i]/j;
			if((fabs(b-(int)b)<1e-8)&&(b!=(double)sqrt(a[i]))){
				c[k]=j+b;
				k++;				
			}
			
		}
		for(z=1;z<k;z++){
			sum=sum+c[z];
		
			
		}
		if((sum+1)==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
	 
}