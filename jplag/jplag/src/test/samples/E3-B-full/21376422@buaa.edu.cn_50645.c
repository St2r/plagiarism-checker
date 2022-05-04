"""
2022-03-26 13:18:23
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1588 KB
Accepted | 1 * (60 / 100) | 4 ms | 1580 KB

"""

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int s = 0;
		for (j = 1; j < arr[i]; j++)
		{
			if ((arr[i] % j)== 0)
			{
				s = s + j;
			}
		}
		if (s == arr[i])
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	return 0;
}