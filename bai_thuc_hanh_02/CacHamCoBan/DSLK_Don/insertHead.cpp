// Last in first out
void insertHead(LList *L, Data x){
    Node *pp;
    pp = (Node*)malloc(sizeof(Node)); // Cấp bộ nhớ để tạo Node mới pp
    pp->infor = x; // Gán thông tin Data x vào infor của node pp
    pp->link = NULL;
    if(emptyList(*L)){ // Kiểm tra xem có trống không, nếu trống thì
        L->pHead = pp;
        L->ptail = pp;
    }
    else{
        pp->link = L->pHead // Phần link của pp gắn với cái mà pHead trỏ tới, ở đây là phần tử đầu (Node đầu gắn vào pp, cái mà pHead đang trỏ tới)
        L->pHead = pp; // pHead giờ gắn vào pp
    }
    L->spt++; // Dù chèn vào ds trống (if) hay ds có phần tử (else) thì số phần tử cũng tăng
}
