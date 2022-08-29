#include <stdio.h>
void insertionSort(int a[], int n);

int main(void) {
    int a[] = { 7,12,6,11,3,8,5,2 };
    int n = sizeof(a) / sizeof(int); // 32 / 4 = 8

    insertionSort(a, n);   //a를 포인터 변수로 사용할 수 없다.
    printf("삽입 정렬");

    for (int i = 1; i < n; i++) {
        printf("%4d", a[i]);
        //key = a[i];
    }
    printf("\n");

    return 0;
}

void insertionSort(int a[], int n) {
    //a를 포인터 변수로 사용할 수 있다.
    //배열의 시작 값을 전달 받으므로 a는 4byte
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = a[i];
        for (j = i - 1; j >= 0; j--) {
            if (key < a[j]) a[j + 1] = a[j];
            else break;
        }
        a[j + 1] = key;
    }
}