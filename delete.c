#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to delete the first occurrence of x from the list L
void delete(int L[], int *size, int x) {
    int i, found = 0;

    // Search for the element x in the list
    for (i = 0; i < *size; i++) {
        if (L[i] == x) {
            found = 1;
            break;
        }
    }

    if (found) {
        // Shift elements to the left to remove the element
        for (int j = i; j < *size - 1; j++) {
            L[j] = L[j + 1];
        }

        // Decrease the size of the list
        (*size)--;
        printf("Element %d deleted.\n", x);
    } else {
        printf("Element %d not found in the list.\n", x);
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
    int L[MAX_SIZE] = {10, 20, 30, 40, 50};  // Initialize the list with 5 elements
    int size = 5;  // Initial size of the list

    // Print the initial list
    print_list(L, size);

    // Delete an element (e.g., 30)
    delete(L, &size, 30);

    // Print the list after deletion
    print_list(L, size);

    // Try deleting an element that is not in the list (e.g., 60)
    delete(L, &size, 60);

    return 0;
}
