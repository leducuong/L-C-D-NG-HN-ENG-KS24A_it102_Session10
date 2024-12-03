#include <stdio.h>

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    for (int i = 1; i < 7; i++) {
        int key = array[i]; 
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    printf("M?ng sau khi s?p x?p tang d?n:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

