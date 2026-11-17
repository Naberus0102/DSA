// Chèn vào sau 1 phần tử mà lớn hơn giá trị tuỳ chọn, ví dụ 1 2 3 5 6, chèn 4 vào ds này
void insertIncrease(LList *L, Data x) {
    Node *pp = L->pHead, *q;
    while(pp != NULL && pp->infor.masv < x.masv){
        q = pp;
        pp = pp->link;
    }
    if(pp == L->pHead) insertHead(L,x);
    else insertAfter(L, q, x);
}
