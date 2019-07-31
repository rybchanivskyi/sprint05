#include <stdbool.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printint(int n);


int main (int count, char **args) {
    int x;
    int y;

    if (count != 3) {
        return 0;
    }
    x = mx_atoi(args[1]);
    y = mx_atoi(args[2]);
    if (x > y) {
        int temp = y;
        y = x;
        x = temp;
    }
    if (mx_isdigit(x + 48) && mx_isdigit(y + 48)) {
        for (int i = x; i <= y; ++i) {
            for (int j = x; j < y ; ++j) {
                mx_printint(i * j);
                mx_printchar('\t');
            }
            mx_printint(i * y);
            mx_printchar('\n');
        }
    }
}
