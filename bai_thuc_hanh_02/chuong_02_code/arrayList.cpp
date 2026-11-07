#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char ten[100];
	int ma;
	float diem1;
	float diem2;
	float diem3;
} SinhVien;

void nhap(SinhVien *p, int n) {
	for (int i = 0; i < n; i++) {
		printf("Ho ten: "); // Dung fgets de lay ca khoang trang

		getchar(); // Loai bo ky tu '\n' con lai trong bo dem
		fgets((p+i)->ten, sizeof((p+i)->ten), stdin);
		(p+i)->ten[strcspn((p+i)->ten, "\n")] = '\0';

		printf("Ma sinh vien: ");
		scanf("%d", &(p+i)->ma);

		printf("Diem 1: ");
		scanf("%f", &(p+i)->diem1);

		printf("Diem 2: ");
		scanf("%f", &(p+i)->diem2);

		printf("Diem 3: ");
		scanf("%f", &(p+i)->diem3);
	}
}

void xuat(SinhVien *p, int n) {
	for (int i = 0; i < n; i++) {
		printf("Ho ten: %s\n", (p+i)->ten);

		printf("Ma sinh vien: %d\n", (p+i)->ma);

		printf("Diem 1: %.2f\n", (p+i)->diem1);

		printf("Diem 2: %.2f\n", (p+i)->diem2);

		printf("Diem 3: %.2f\n", (p+i)->diem3);
	}
}

int main() {
	int n;

	printf("So sinh vien: ");
	scanf("%d", &n);

	SinhVien *p = (SinhVien*)malloc(n * sizeof(SinhVien));

	if (p == NULL) {
		printf("Khong the cap phat bo nho!");
		return 1;
	}

	nhap(p, n);
	xuat(p, n);

	free(p);

	return 0;
}
