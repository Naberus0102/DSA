void delAfter(LList *L, Node *q) {
    Node *pp;
    if(NULL == q) return;
    else{
        pp = q->link; // Gắn các pp cho cái mà q link tới
        if(q->link == L->pTail) L->pTail = q; // Nếu mà q link tới là tail thì gắn pTail vào nó
        q->link = pp->link; // Gắn cái q link vào cái pp đang link
        free(pp);
        L->spq--;
    }
}
