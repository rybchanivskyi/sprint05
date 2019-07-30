int mx_gcd(int a, int b) {
    if (b == 0) {
        if (a < 0) {
            a = 0 - a;
        }
        return a;
    }
    else {
        return mx_gcd(b, a % b);
    }
}
