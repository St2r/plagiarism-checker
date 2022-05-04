"""
2022-03-29 22:39:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1628 KB
Accepted | 1 * (35 / 100) | 0 ms | 1616 KB
Accepted | 1 * (60 / 100) | 3 ms | 1616 KB

"""

int a[100];
int main()
{
	int n,p,q=0,sum=0;
	scanf("%d",&n);
    for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(int p=0;p<n;p++){
			for(q=1;q<a[p];q++){
				if((a[p] % q)==0)
					sum=sum+q;
				}
		if(sum==a[p]){		
		printf("YES\n");}
		else{
		printf("NO\n");}
		sum=0;
		q=0;

}
		return 0;
}