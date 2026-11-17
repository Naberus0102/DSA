// First in first out
void insertTail(LList *L, Data x){
    Node *pp;
    pp = (Node*)malloc(sizeof(Node));
    pp->infor = x;
    pp->link = NULL;
    if(emptyList(*L)){
        L->pHead = pp;
        L->pTail = pp;
    }
    else{
        L->pTail->link = pp; // Node cuối gắn vào pp (cái mà pTail đang link tới)
        L->pTail = pp; // pTail link vào pp
    }
    L->spt++;
}
