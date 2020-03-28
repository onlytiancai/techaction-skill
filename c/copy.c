#include <stdio.h>

int main(int argc, char **argv) {
    char *src, *dst;
    FILE *file_src, *file_dst;
    int ch;

    if (argc != 3) {
        printf("Usage %s src dst\n", argv[0]);
        return -1;
    }

    src = argv[1];
    dst = argv[2];
    printf("src=%s dst=%s\n", src, dst);

    if((file_src = fopen(src, "r")) == NULL) {
        perror("src file open error");
        return -1; 
    }

    if((file_dst = fopen(dst, "w")) == NULL) {
        perror("dst file open error");
        return -1; 
    }

    while ((ch = fgetc(file_src)) != EOF) {
        if (fputc(ch, file_dst) == EOF) {
            perror("putc error");
            return -1;
        }
    }

    if (fclose(file_src) == EOF) {
        perror("src file close error");
        return -1; 
    }

    if (fclose(file_dst) == EOF) {
        perror("dst file close error");
        return -1; 
    }
}
