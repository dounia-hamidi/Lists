#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to reverse the elements of the list L
void reverse(int L[], int size) {
    int temp;
    int left = 0;         // Start index
    int right = size - 1; // End index

    while (left < right) {
        // Swap elements at left and right
        temp = L[left];
        L[left] = L[right];
        L[right] = temp;

        // Move towards the center
        left++;
        right--;
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
    int size = 5;  // Current size of the list

    // Print the initial list
    print_list(L, size);

    // Reverse the list
    reverse(L, size);

    // Print the list after reversal
    print_list(L, size);

    return 0;
}
