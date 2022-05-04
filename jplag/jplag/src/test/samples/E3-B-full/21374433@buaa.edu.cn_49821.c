"""
2022-03-28 21:53:03
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1604 KB
Accepted | 1 * (35 / 100) | 1 ms | 1588 KB
Accepted | 1 * (60 / 100) | 3 ms | 1592 KB

"""

int main()
{
	int n, i;
	scanf("%d",&n);
	int a[n], num[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		num[i]=0;
		for(int c=1;c<a[i];c++){
			if(a[i]%c==0)
			num[i] = num[i] + c; 
		}
		if(num[i]==a[i])
		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}