// Tách từ L sang L1 và L2
void tach(LList L, LList *L1, LList *L2) { // L1 và L2 được tạo ra nên phải dùng con trỏ
    initList(L1);
    initList(L2);
    Node *pp = L.pHead;
    while (pp != NULL) {
        if(pp->infor....) // Điều kiện, có thể là tách ds sinh viên có điểm >= 5 và < 5;
            insertHead(L1,pp->infor);
        else
            insertHead(L2,pp->infor);
        pp = pp->link;
    }
}


void ghep(LList L1, LList L2, LList *L) { // L được tạo ra nên phải dùng con trỏ
    initList(L);
    Node *pp = L.pHead;

    if(L1.spt < L2.spt){
        while(p1 != NULL){
            insertHead(L,p1->pHead);
            insertHead(L,p2->pHead);
            p1 = p1->link;
            p2 = p2->link;
        }
        while(p2 != NULL){
            insertHead(L,p2->infor);
            p2 = p2->link;
        }
    }
    else{
        while(p2 != NULL){
            insertHead(L,p2->pHead);
            insertHead(L,p1->pHead);
            p2 = p2->link;
            p1 = p1->link;
        }
        while(p1 != NULL){
            insertHead(L,p1->infor);
            p1 = p1->link;
        }
    }
}
