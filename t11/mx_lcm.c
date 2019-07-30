int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    int del = mx_gcd(a, b);
    int res;

    if ((a == 0 && b == 0) || (a > 2147483647.0 / b)) {
        return 0;
    }
    if (del == 0) {
        return 0;
    }
    res = (a * b) / del;
    if (res < 0) {
        res = 0 - res;
    }
    return res;
}
