#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
	if ((n>=1 && m>=1 && a>=1) && (n<=pow(10, 9) && m<=pow(10, 9) && a<=pow(10, 9)))
	{
		// Calculate the number of flagstones needed for each dimension
		long long flagstones_n = (n + a - 1) / a;  // ceil(n/a)
		long long flagstones_m = (m + a - 1) / a;  // ceil(m/a)

		// Calculate the total number of flagstones needed
		long long total_flagstones = flagstones_n * flagstones_m;

		printf("%lld\n", total_flagstones);
	}
	else return 1;

    return 0;
}