#include "fibonacci.h"

long long fibonacci(int n) {
    if (n < 0) return -1;
    if (n <= 1) return n;

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; i++) {
        long long tmp = a + b;
        a = b;
        b = tmp;
    }

    return b;
}
