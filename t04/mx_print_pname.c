void mx_printchar(char c);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printstr(const char *s);

int main (int count ,char **args) {
    char *str = *args;
    if (count){
        str = mx_strchr(*args, '/');
        mx_printstr(str);
        mx_printchar('\n');
    }
    return 0;
}
