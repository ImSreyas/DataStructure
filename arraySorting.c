#include <stdio.h>

// Function to display an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    int minIndex, temp;
    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100], size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform Bubble Sort
    int bubbleSortedArr[100];
    for (int i = 0; i < size; i++) {
        bubbleSortedArr[i] = arr[i];
    }
    bubbleSort(bubbleSortedArr, size);
    printf("Bubble Sort Result: ");
    displayArray(bubbleSortedArr, size);

    // Perform Selection Sort
    int selectionSortedArr[100];
    for (int i = 0; i < size; i++) {
        selectionSortedArr[i] = arr[i];
    }
    selectionSort(selectionSortedArr, size);
    printf("Selection Sort Result: ");
    displayArray(selectionSortedArr, size);

    // Perform Insertion Sort
    int insertionSortedArr[100];
    for (int i = 0; i < size; i++) {
        insertionSortedArr[i] = arr[i];
    }
    insertionSort(insertionSortedArr, size);
    printf("Insertion Sort Result: ");
    displayArray(insertionSortedArr, size);

    return 0;
}