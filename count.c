#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to count how many times x appears in the list L
int count(int L[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (L[i] == x) {
            count++;  // Increment count for each occurrence of x
        }
    }
    return count;  // Return the total count
}

// Function to print the list
void print_list(int L[], int size) {
    printf("The elements in the list are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");
}

int main() {
    int L[MAX_SIZE] = {10, 20, 30, 40, 30, 50, 30};  // List with repeated elements
    int size = 7;  // Current size of the list

    // Print the initial list
    print_list(L, size);

    // Count how many times 30 appears in the list
    int result = count(L, size, 30);
    printf("Element 30 appears %d times in the list.\n", result);

    // Count how many times 60 appears in the list (should be 0)
    result = count(L, size, 60);
    printf("Element 60 appears %d times in the list.\n", result);

    return 0;
}
