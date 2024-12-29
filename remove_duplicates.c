#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to remove duplicates from a sorted list L
int remove_duplicates(int L[], int size) {
    if (size == 0) {
        return 0;  // If the list is empty, return size 0
    }

    int new_size = 1;  // The first element is always unique
    for (int i = 1; i < size; i++) {
        if (L[i] != L[i - 1]) {  // If current element is different from the previous one
            L[new_size] = L[i];  // Place it at the next position in the unique part of the list
            new_size++;
        }
    }

    return new_size;  // Return the new size of the list without duplicates
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
    int L[MAX_SIZE] = {1, 1, 2, 3, 3, 4, 5, 5, 5};  // Sorted list with duplicates
    int size = 9;  // Current size of the list

    // Print the original list
    print_list(L, size);

    // Remove duplicates from the list
    size = remove_duplicates(L, size);

    // Print the list after removing duplicates
    print_list(L, size);

    return 0;
}
