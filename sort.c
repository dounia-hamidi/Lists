#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to sort the elements of the list L using Bubble Sort
void sort(int L[], int size) {
    int temp;
    int swapped;

    // Bubble Sort algorithm
    for (int i = 0; i < size - 1; i++) {
        swapped = 0;
        // Last i elements are already sorted, so we do not need to check them
        for (int j = 0; j < size - i - 1; j++) {
            if (L[j] > L[j + 1]) {
                // Swap the elements if they are in the wrong order
                temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no elements were swapped, the list is already sorted
        if (!swapped) {
            break;
        }
    }
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
    int L[MAX_SIZE] = {40, 10, 50, 20, 30};  // Initialize the list with 5 elements
    int size = 5;  // Current size of the list

    // Print the initial list
    print_list(L, size);

    // Sort the list
    sort(L, size);

    // Print the list after sorting
    print_list(L, size);

    return 0;
}
