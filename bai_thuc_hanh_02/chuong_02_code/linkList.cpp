#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char ten[100];
	int ma;
	float diem1;
	float diem2;
	float diem3;
} DataSV;

typedef struct tagNode {
	DataSV infor;
	struct tagNode *link;
} Node;

typedef struct {
	Node *pHead;
	Node *pTail;
	int spt;
} LList;

void initList(LList *L) {
	L->pHead = NULL;
	L->pTail = NULL;
	L->spt = 0;
}

int emptyList(LList L) {
	if(L.spt == 0) return 1;
	else return 0;
}

void insertTail(LList *L, DataSV x) {
	Node *pp;
	pp = (Node*)malloc(sizeof(Node));

	pp->infor = x;
	pp->link = NULL;

	if(emptyList(*L)) {
		L->pHead = pp;
		L->pTail = pp;
	}
	else {
		L->pTail->link = pp;
		L->pTail = pp;
	}

	L->spt++;
}

void nhap(DataSV *x) {
	printf("Ma sinh vien: ");
	scanf("%d", &x->ma);

	if(x->ma > 0) {
		printf("Ho ten: ");

		getchar();
		fgets(x->ten, sizeof(x->ten), stdin);
		x->ten[strcspn(x->ten, "\n")] = '\0';

		printf("Diem 1: ");
		scanf("%f", &x->diem1);

		printf("Diem 2: ");
		scanf("%f", &x->diem2);

		printf("Diem 3: ");
		scanf("%f", &x->diem3);
	}
}

void taoDS(LList *L) {
	initList(L);

	DataSV x;

	do {
		nhap(&x);

		if(x.ma > 0) insertTail(L, x);

	} while(x.ma > 0);
}

void in(DataSV x) {
	printf("%s, ", x.ten);
	printf("%d, ", x.ma);
	printf("%f, ", x.diem1);
	printf("%f, ", x.diem2);
	printf("%f\n", x.diem3);
}

void duyetDS(LList L) {
	Node *pp = L.pHead;

	while(pp != NULL) {
		in(pp->infor);
		pp = pp->link;
	}
}

void giaiPhongDS(LList *L) {
	Node *pp;

	while(L->pHead != NULL) {
		pp = L->pHead;
		L->pHead = L->pHead->link;
		free(pp);
	}

	L->pTail = NULL;
	L->spt = 0;
}

int main() {
	LList ds1;

	initList(&ds1);
	taoDS(&ds1);
	duyetDS(ds1);

	giaiPhongDS(&ds1);

	return 0;
}
