#include <stdio.h>
#include <stdlib.h>

void nhap(int **a, int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", *(*(a+i)+j));
		}
	}
}

void xuat(int **a, int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", *(*(a+i)+j));
		}
		printf("\n");
	}
}

int main() {
	int m, n;

	printf("Nhap so hang: ");
	scanf("%d", &m);

	printf("Nhap so cot: ");
	scanf("%d", &n);

	int **a = (int**)malloc(m * sizeof(int*));

	for(int i = 0; i < m; i++) {
		a[i] = (int*)malloc(n * sizeof(int));
	}

	nhap(a, m, n);
	xuat(a, m, n);

	for(int i = 0; i < m; i++) {
		free(a[i]);
	}

	free(a);

	return 0;
}
