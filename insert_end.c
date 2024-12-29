#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to insert an element at the end of the list
void insert_end(int L[], int *size, int x) {
    // Check if there is space in the list
    if (*size < MAX_SIZE) {
        // Insert element at the end of the list
        L[*size] = x;
        // Increase the size of the list
        (*size)++;
    } else {
        printf("List is full. Cannot insert element %d.\n", x);
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
    int L[MAX_SIZE];  // The linear list
    int size = 0;     // Current size of the list

    // Inserting elements at the end of the list
    insert_end(L, &size, 10);
    insert_end(L, &size, 20);
    insert_end(L, &size, 30);
    insert_end(L, &size, 40);

    // Print the list after insertions
    print_list(L, size);

    // Insert another element at the end
    insert_end(L, &size, 50);
    print_list(L, size);

    return 0;
}
