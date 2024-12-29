#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to search for the element x in the list L
int search(int L[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (L[i] == x) {
            return i;  // Return the index of the first occurrence of x
        }
    }
    return -1;  // Return -1 if x is not found in the list
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
    int L[MAX_SIZE] = {10, 20, 30, 40, 50};  // Initialize the list with 5 elements
    int size = 5;  // Initial size of the list

    // Print the initial list
    print_list(L, size);

    // Search for an element (e.g., 30)
    int index = search(L, size, 30);
    if (index != -1) {
        printf("Element 30 found at index: %d\n", index);
    } else {
        printf("Element 30 not found in the list.\n");
    }

    // Search for an element that is not in the list (e.g., 60)
    index = search(L, size, 60);
    if (index != -1) {
        printf("Element 60 found at index: %d\n", index);
    } else {
        printf("Element 60 not found in the list.\n");
    }

    return 0;
}
