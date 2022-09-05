#include <stdio.h>

void quickSort(int a[], int left, int right) {	// left ~ right : 범위
	int i = left, j = right, pivot = a[left], temp;	// temp : 데이터 교환		pivot = a[left] 대신 pivot = a[i]를 써도 됨

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
		a[left] = a[j];	// 여기선 left 대신 i를 쓰면 안 됨
		a[j] = pivot;	// pivot과 j하고 교환
		quickSort(a, left, j - 1);	// left는 그대로, right는 j보다 한 칸 앞
		quickSort(a, j + 1, right);	// left는 j보다 한 칸 뒤, right는 그대로
	}
}

int main(void) {
	int a[] = { 23, 5, 37, 1, 30, 11, 52, 48, 20 };
	int n = sizeof(a) / sizeof(int);	// 데이터 개수

	quickSort(a, 0, n - 1);	

	printf("퀵 정렬 : ");
	for (int i = 0; i < n; i++) 
		printf("%5d", a[i]);
	
	printf("\n");

	return 0;
}