#include <stdio.h>

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int temp;
    printf("mang ban dau la:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("mang sau khi sap ep tang dan:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

