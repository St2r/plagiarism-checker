"""
2022-03-26 13:03:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,z,y,x,sum=0;
	scanf("%d",&n);
	int a[n],b[100] = {0};
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(k=1,z=0;k<=(a[j]/2);k++){
			if(a[j]%k==0){
				b[z]=k;
				z++;
			}
			else{
			}
		} 
		for(y=0;y<z;y++){
			sum=sum+b[y];
		}
		if(sum==a[j]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		for(x=0;x<100;x++){
			b[x]=0;
		}
        sum=0;
	}
}