#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10  // Maximum size of the list

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify the array to maintain the min-heap property
void heapify(int heap[], int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest]) {
        smallest = left;
    }

    if (right < size && heap[right] < heap[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapify(heap, size, smallest);
    }
}

// Function to insert an element into the heap
void insert_heap(int heap[], int *size, int value) {
    heap[*size] = value;
    (*size)++;

    // Heapify the heap from the last element
    int i = *size - 1;
    while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to return the k-th largest element using a min-heap
int kth_largest(int L[], int size, int k) {
    int heap[k];  // Min-heap to store the k largest elements
    int heap_size = 0;

    // Build a min-heap of size k
    for (int i = 0; i < size; i++) {
        if (heap_size < k) {
            insert_heap(heap, &heap_size, L[i]);
        } else if (L[i] > heap[0]) {
            // Replace root of heap (smallest) with the current element
            heap[0] = L[i];
            heapify(heap, k, 0);
        }
    }

    return heap[0];  // The root of the min-heap is the k-th largest element
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
    int L[MAX_SIZE] = {12, 3, 5, 7, 19, 2, 6, 17, 11, 10};  // Example list
    int size = 10;  // Size of the list
    int k = 3;  // Find the 3rd largest element

    // Print the original list
    print_list(L, size);

    // Find the k-th largest element
    int result = kth_largest(L, size, k);
    printf("The %d-th largest element is: %d\n", k, result);

    return 0;
}
