//Giống với tìm kiếm và delByInfor (duyệt, tìm kiếm, xử lí)

void processList(LList L) {
    Node *pp = L.pHead;
    while (pp != NULL){
        processNode(pp)...
        pp = pp->link;
    }
}
