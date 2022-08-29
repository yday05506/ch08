#include <stdio.h>
void insertionSort(int a[], int n);

int main(void) {
    int a[] = { 7,12,6,11,3,8,5,2 };
    int n = sizeof(a) / sizeof(int); // 32 / 4 = 8

    insertionSort(a, n);   //a�� ������ ������ ����� �� ����.
    printf("���� ����");

    for (int i = 1; i < n; i++) {
        printf("%4d", a[i]);
        //key = a[i];
    }
    printf("\n");

    return 0;
}

void insertionSort(int a[], int n) {
    //a�� ������ ������ ����� �� �ִ�.
    //�迭�� ���� ���� ���� �����Ƿ� a�� 4byte
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