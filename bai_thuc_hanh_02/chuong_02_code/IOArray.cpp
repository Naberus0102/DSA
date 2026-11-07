#include <stdio.h>
#include <stdlib.h>

void nhap(int *a, int n) {
	for(int i = 0; i < n; i++) {
		scanf("%d", (a+i));
	}
}

void xuat(int *a, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d", *(a+i));
	}
}

int main() {
	int n;

	printf("Nhap n: ");
	scanf("%d", &n);

	int *a = (int*)malloc(n * sizeof(int));

	nhap(a, n);
	xuat(a, n);

	free(a);

	return 0;
}
