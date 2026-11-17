// Trỏ pHead, pTail vào null, gán số phần tử là 0 (Phân biệt với khai báo cấu trúc)
// Khi thực hiện các tác vụ làm thay đổi phần tử, cấu trúc của LList thì cần dùng con trỏ * (ví dụ thêm, sửa, xoá)
void initList(LList *L) {
    L->pHead = NULL;
    L->pTail = NULL;
    L->spt = 0;
}

