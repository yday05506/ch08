#include <stdio.h>
void shellSort(int a[], int n);

int main(void) {
    int a[] = { 7,12,6,11,3,8,5,2, 4, 1, 5 };
    int n = sizeof(a) / sizeof(int); // 32 / 4 = 8

    shellSort(a, n);   //a�� ������ ������ ����� �� ����.
    printf("�� ����");

    for (int i = 1; i < n; i++) {
        printf("%4d", a[i]);
        //key = a[i];
    }
    printf("\n");

    return 0;
}

void shellSort(int a[], int n) {
    //a�� ������ ������ ����� �� �ִ�.
    //�迭�� ���� ���� ���� �����Ƿ� a�� 4byte
    int i, j, key, t;

    for (t = n / 2; t >= 1; t = t / 2 ) {   // t /= 2
        for (i = t; i < n; i++) {
            key = a[i];
            for (j = i - t; j >= 0; j -= t) {   // j = j - t
                if (key < a[j]) a[j + t] = a[j];
                else break;
            }
            a[j + t] = key;
        }
    }
}