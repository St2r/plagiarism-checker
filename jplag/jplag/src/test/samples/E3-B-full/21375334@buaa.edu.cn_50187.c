"""
2022-03-29 16:39:52
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1668 KB

"""

#include <stdio.h>

main() {
	int n, al, yinzishu = 0, s = 0;
	int yin[1000] = {0};
	int result[100] = {0};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		yinzishu = 0;
		s = 0;
		scanf("%d", &al);
		for (int j = 1; j < al; j++) {
			if (al % j == 0) {
				yinzishu++;
				yin[yinzishu] = j;

			}
		}
		for (int k = 1; k <= yinzishu; k++) {
			s += yin[k];
		}
		if (s == al) {
			result[i - 1] = 1;
		} else
			result[i - 1] = 0;
	}
	for (int i = 1; i <= n; i++) {
		if (result[i - 1] == 1)
			printf("YES\n");
		if (result[i - 1] == 0)
			printf("NO\n");
	}
	return 0;
}