int mx_factorial_iter(int n) {
    int res = 1;
    if (n < 0) {
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        if (res > 2147483647 / i) {
            return 0;
        }
        res *= i;
    }
    return res;
}
