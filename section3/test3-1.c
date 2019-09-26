#include "apue.h"

int main() {
    if (lseek(STDIN_FILENO, 0, SEEK_CUR)) {
        printf("cannot seek\n");
    } else {
        printf("seek OK\n");
    }
    exit(0);
}
