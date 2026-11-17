// Tìm kiếm không làm thay đổi cấu trúc node nên dùng tạo biến mới, không dùng con trỏ

// Tìm từ head đến tail
// Tìm kiếm theo id (ví dụ mã sinh viên, cccd,...)
Node *search(LList L, int id) {
    Node *pp = L.pHead; // Tạo 1 node mới, gắn vào cái mà pHead đang trỏ vào
    while(pp != NULL && pp->infor.masv != id){ // Chạy đến khi gặp NULL hoặc id)
        pp = pp->link; // Chuyển pp sang node mà pp link tới (cái bên cạnh)
    }
    return pp; //Trả về địa chỉ (NULL hoặc là của id)
}

// Tìm kiếm theo tên (char name[30])
Node *search(LList L, char name[30]) {
    Node *pp = L.pHead;
    while (pp != NULL && !strstr(pp->infor.hoten, name)){
        pp = pp->link;
    }
    return pp;
}
