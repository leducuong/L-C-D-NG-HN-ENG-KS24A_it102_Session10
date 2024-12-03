#include <stdio.h>

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90}; 
    for (int i = 0; i < 7 - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 7; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
    printf("mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
