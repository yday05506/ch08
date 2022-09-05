#include <stdio.h>

void quickSort(int a[], int left, int right) {	// left ~ right : ����
	int i = left, j = right, pivot = a[left], temp;	// temp : ������ ��ȯ		pivot = a[left] ��� pivot = a[i]�� �ᵵ ��

	if (left < right) {
		while (i < j) {	// >=
			while (pivot >= a[i] && i < right) i++;
			while (pivot <= a[j] && j > left) j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];	// ���⼱ left ��� i�� ���� �� ��
		a[j] = pivot;	// pivot�� j�ϰ� ��ȯ
		quickSort(a, left, j - 1);	// left�� �״��, right�� j���� �� ĭ ��
		quickSort(a, j + 1, right);	// left�� j���� �� ĭ ��, right�� �״��
	}
}

int main(void) {
	int a[] = { 23, 5, 37, 1, 30, 11, 52, 48, 20 };
	int n = sizeof(a) / sizeof(int);	// ������ ����

	quickSort(a, 0, n - 1);	

	printf("�� ���� : ");
	for (int i = 0; i < n; i++) 
		printf("%5d", a[i]);
	
	printf("\n");

	return 0;
}