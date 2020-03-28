#include <stdio.h>
#include <string.h>

static int atoi(char *str);


int main(int argc, char **argv) {
   printf("%d\n", atoi("12345"));
   printf("%d\n", atoi("54321"));
   printf("%d\n", atoi(""));
   printf("%d\n", atoi("-1"));
   printf("%d\n", atoi("1234a"));
   printf("%d\n", atoi("123456789123"));
   return 0;
}

static int atoi(char *str) {
    int ret = 0;
    char *p;
    for (p=str; *p != '\0'; p++) {
        printf("debug %c\n", *p);

        /* 出现非数字直接返回 */
        if (*p < '0' || *p > '9') return -1;
        ret *= 10;
        ret += (*p - '0');
    }

    return ret;
}
