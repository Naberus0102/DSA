// Khai báo struct sinh viên
typedef struct {
    char hoten[30]; // Trong C không có string, dùng char
    int masv;
    float diemtb;
} Data; // Tên sruct

// Khai báo thành phần 1 node
typedef struct tagNode {
    Data infor; // Phần thông tin 1 node
    struct tagNode *link; // Phần liên kết với node khác
} Node; // Tên node

// Khai báo cấu trúc ban đầu của Link List
typedef struct {
    Node *pHead;
    Node *pTail;
    int spt;
}LList; // Tên cấu trúc là LList


