void delHead(LList *L){
    Node *pp;
    if(emptyList(*L)) return;
    else{
        pp = L->pHead; // Gắn pp vào đầu
        L->pHead = pp->link; // Chuyển pHead sang cái mà pp link tới (node tiếp theo)
        free(pp);
        L->spt--;
        if(L->pHead == NULL) L->pTail = NULL; // Xoá hết, cả 2 trỏ về NULL
    }
}
