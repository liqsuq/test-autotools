#include <stdio.h>
#include <signal.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    printf("SIG_ATOMIC_MIN: %d\n", SIG_ATOMIC_MIN);
    printf("SIG_ATOMIC_MAX: %d\n", SIG_ATOMIC_MAX);
    printf("%10c\n", '*');
    perror("test\n");
    printf("test" "test\n");
    printf("%d\n", EXIT_FAILURE);
    return 1;
}
