#include <stdbool.h>

bool mx_isdigit(int c);
void mx_printchar(char c);
void mx_printint(int n);
bool mx_isspace(char c);
int mx_atoi(const char *str);


int main(int argc,char **argv) {
    int arr[32];
    int temp;
    int flag = 0;

    for (int i = 1; i < argc; ++i) {
        temp = mx_atoi(argv[i]);
        flag = 0;
        if (temp < 0) {
            temp *= -1;
            temp = temp - 1;
            flag = 1;
        }
        if (flag == 0) {
            for(int j = 0; j < 32; ++j) {
                arr[j] = temp % 2;
                temp /= 2;
            }
        }
        else if (flag == 1) {
            for(int j = 0; j < 32; ++j) {
                arr[j] = 1 - (temp % 2);
                temp /= 2;
            }
            for(int j = 31; j <= 0; --j) {
                if (arr[j] == 1 && arr [j - 1] == 0) {
                    arr[j] = 0;
                    arr[j - 1] = 1;
                    i = 0;
                }
                else if (arr[j] == 0) {
                    arr[j] = 1;
                    i = 0;
                }
                else if (arr[j] == 1){
                    arr[j] = 0;
                }
            }
        }
        for(int j = 31; j >= 0; --j) {
            mx_printint(arr[j]);
        }
        mx_printchar('\n');
    }
}
