#include "apue.h"

#define BUFSIZE 4096

int main() {
    int n;
    char buf[BUFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFSIZE)) > 0) {
        if (write(STDOUT_FILENO, buf, n) != n) {
            printf("Write error");
        }
    }

    if (n < 0) {
        printf("read error");
    }
    exit(0);
}

