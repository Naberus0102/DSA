// Chèn 1 phần tử vào sau node q
void insertAfter(LList *L, Node *q, Data x) {
    Node *pp;
    if(NULL == q) return;
    else {
        pp = (Node*)malloc(sizeof(Node));
        pp->infor = x;
        pp->link = q->link; //cái mà q link tới chuyển thành cái mà pp link tới
        q->link = pp; // Chuyển cái q link tới sang pp
        if(q == L->pTail) L->pTail = pp; // Nếu q là phần tử ở cuối
        L->spt++;
    }
}
