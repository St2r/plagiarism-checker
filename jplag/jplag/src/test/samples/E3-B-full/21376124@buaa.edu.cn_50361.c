"""
2022-03-27 13:58:52
AC
1.0
Accepted | 1 * (5 / 100) | 4 ms | 1656 KB
Accepted | 1 * (35 / 100) | 4 ms | 1692 KB
Accepted | 1 * (60 / 100) | 5 ms | 1552 KB

"""

#include <stdio.h>

int main()
{
	int num,a,sum;
	int i,k,j=0;
	int n;
	
	scanf("%d",&n);
	
	for(j=1;j<=n;j++){
	sum=0;
	scanf("%d",&num);
	for(a=1;a<num;a++){
		if(a==1){
			sum+=1;
		}
		else{
		if(num%a==0){
			if(a==2){
				k++;
			}
			else{
			for(i=2;i<a;i++){
				if(a%i!=0){
					k++;
				}
			}
		}
			if(k!=0){
				sum+=a;
			}
		}
		}
	}
	printf("%d\n",sum);
	if(sum==num){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
	return 0;
}