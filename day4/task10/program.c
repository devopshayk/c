#include <stdio.h>

	int main() {
		int num = 0;
		int n = 0;

		printf("Tiv 2-n astichanov baz-baj: ");
		scanf("%d", &num);

		printf("inch astichanov: ");
		scanf("%d", &n);

		int baz = num << n;
		int baj = num >> n;

		printf("%d tvi %d astichanov baj = %d, baz = %d ", num, n, baj, baz);

		return 0;

	}
