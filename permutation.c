// permutation.c
#include <stdio.h>
#define TYPE char
void swap(TYPE *a, TYPE *b);
void permutation(TYPE *list, int i, int n);

int main() {
    TYPE arr[3] = { 'a', 'b', 'c' };
    int N = sizeof(arr) / sizeof(TYPE);
    permutation(arr, 0, N);
    return 0;
}

void swap(TYPE *a, TYPE *b) {
    TYPE tmp = *a;
    *a = *b;
    *b = tmp;
}

void permutation(TYPE *list, int i, int n) {
    if (i == n - 1) {
        for (int j = 0; j < n; j++)
            printf("%c ", list[j]); // print entire list
        printf("\n");
    }
    else {
        for (int j = i; j < n; j++) {
            swap(list + i, list + j);
            permutation(list, i + 1, n);
            swap(list + i, list + j);
        }
    }
}
