"""
2022-03-29 19:42:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

long long int gleam(int n);
int main(void)
{
  int n,x;
  
  double y;
  
  scanf("%d",&n);
  
  if(n>=18)
  
  n=18;
  
  for(x=0;x<=n;x++)
  {
  	y=y+1.0/gleam(x);
  }
  printf("%.14lf",y);
}
long long int gleam(int n)
{
	long long int a=1;
	int x;
	for(x=1;x<=n;x++)
	a=a*x;
	if(n==0)
	return 1;
	if(n!=0)
	return a;
}