"""
2022-03-26 16:15:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1588 KB
Accepted | 1 * (35 / 100) | 3 ms | 1588 KB
Accepted | 1 * (60 / 100) | 19 ms | 1624 KB

"""

#include <stdio.h>
 int main()
 {
 	int n,x,sum;
 	scanf("%d",&n);
 	for(int i=0;i<=n-1;i++){
	 	//TODO
	 	sum=0;
	 	scanf("%d",&x);
	 	for(int t=1;t<=x/5;t++){
		 	//TODO
		 	if((x%t)==0){
			 	//TODO
			 	sum=sum+t;
			}
			}
			if((1.0*x/4-x/4)<1e-5){
				//TODO
				sum=sum+x/4;
			}if((1.0*x/3-x/3)<1e-5){
				//TODO
				sum=sum+x/3;
			}if((1.0*x/2-x/2)<1e-5){
				//TODO
				sum=sum+x/2;
			}
		 if(sum==x){
		 	//TODO
		 	printf("YES\n");
		 }else{
		 	printf("NO\n");
		 }
	 }
	 return 0;
 }