#include "apue.h"

int main() {
    printf("Hello world from process ID %d\n", (long)getpid());
    exit(0);
}
