#include <stdio.h>
#include <math.h>

int Calculate (long long n, long long m, long long a) {
	long long flagstones_n = (n + a - 1) / a;  
	long long flagstones_m = (m + a - 1) / a;  

	long long total_flagstones = flagstones_n * flagstones_m;

	printf("%lld\n", total_flagstones);
}

int main () {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

	if ((n>=1 && m>=1 && a>=1) && (n<=pow(10, 9) && m<=pow(10, 9) && a<=pow(10, 9))) Calculate(n, m, a);
	
    return 0;
}