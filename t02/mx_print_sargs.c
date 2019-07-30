void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

int main(int count, char **args) {
    char *temp;
    for (int i = 0; i < count; ++i) {
        for (int j = 1; j < count - i; ++j) {
            if (mx_strncmp(args[j],args[j - 1], mx_strlen(args[j])) <= 0) {
                temp = args[j];
                args[j] = args[j - 1];
                args[j - 1] = temp;
            }
        }
    }
    for (int i = 1; i < count; ++i) {
        mx_printstr(args[i]);
        mx_printchar('\n');
    }
}
