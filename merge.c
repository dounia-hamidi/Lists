#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the lists

// Function to merge two sorted lists L1 and L2 into a new sorted list
void merge(int L1[], int size1, int L2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two lists while both lists have elements
    while (i < size1 && j < size2) {
        if (L1[i] < L2[j]) {
            result[k] = L1[i];
            i++;
        } else {
            result[k] = L2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in L1, add them to result
    while (i < size1) {
        result[k] = L1[i];
        i++;
        k++;
    }

    // If there are remaining elements in L2, add them to result
    while (j < size2) {
        result[k] = L2[j];
        j++;
        k++;
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
    int L1[] = {1, 3, 5, 7};  // First sorted list
    int L2[] = {2, 4, 6, 8};  // Second sorted list
    int size1 = 4;  // Size of the first list
    int size2 = 4;  // Size of the second list

    int result[MAX_SIZE];  // Array to hold the merged result

    // Merge the two sorted lists
    merge(L1, size1, L2, size2, result);

    // Print the merged sorted list
    print_list(result, size1 + size2);

    return 0;
}
