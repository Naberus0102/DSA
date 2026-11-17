void delByInfor(LList *L, char K[30]) {
    Node *pp = L->pHead,*q;
    while(pp != NULL && !strstr(pp->infor.ten,K)){
        q = pp;
        pp = pp->link; // Chuyển sang phần tử khác
    }
    if(NULL == pp) return;
    else {
        if(pp == L->pHead) delHead(L);
        else delAfter(L,q);
    }
}

