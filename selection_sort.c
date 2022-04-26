// selection_sort.c

#include <stdio.h>

void swap(int *a, int *b);
void selection_sort(int list[], int n);

int main() {
    int arr[10] = { 8, 7, 3, 0, 9, 1, 4, 6, 2, 5 };
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    
    selection_sort(arr, sizeof(arr) / sizeof(int));
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int list[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i; j < n; j++)
            if (list[j] < list[min]) min = j;
        swap(list + i, list + min);
    }
}
