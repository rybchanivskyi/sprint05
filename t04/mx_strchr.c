char *mx_strchr(const char *s, int c) {
    int flag = 0;
    int last = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == c) {
            flag = 1;
            last = i;
        }
    }
    if (flag) {
        return (char *)(s + last + 1);
    }
    return 0;
}
