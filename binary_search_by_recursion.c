// binary_search_by_recursion.c

#include <stdio.h>

int binary_search(int *list, int query, int start, int end);

int main() {
    int arr[10] = { 4, 12, 19, 22, 37, 40, 51, 55, 71, 89 };
    int Q = 55;
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) printf(" [%d]", i);
    printf("\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) printf("%4d", arr[i]);
    
    printf("\n\nQ = %d", Q);
    int res = binary_search(arr, Q, 0, 9);
    printf("\n[%d]\n\n", res);
    
    return 0;
}

int binary_search(int *list, int query, int start, int end) {
    if (start > end)
        return -1;
    int middle = (start + end) / 2;
    if (list[middle] > query)
        return binary_search(list, query, start, middle - 1);
    else if (list[middle] < query)
        return binary_search(list, query, middle + 1, end);
    else
        return middle;
}
