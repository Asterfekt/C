#include <stdio.h>

volatile int flag = 0;

void func() {
    while (flag == 0) {
        // Wait until flag is set
    }
    printf("Flag is set\n");
}

int main() {
    printf("Starting func() in separate thread...\n");
    func();
    flag = 1;
    printf("Exiting main()\n");
    return 0;
}