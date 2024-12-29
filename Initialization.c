#include <stdio.h>

int main() {
    // Define and initialize the linear list (array) with 5 elements
    int L[5] = {10, 20, 30, 40, 50};

    // Printing the elements of the linear list
    printf("The elements of the linear list are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}
