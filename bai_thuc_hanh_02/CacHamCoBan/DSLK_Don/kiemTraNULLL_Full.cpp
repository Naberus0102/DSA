int emptyList(LList L){
    if(L.spt == 0)
        return 1;
    return 0
}

// Full list làm tương tự, cần biết giới hạn
int fullList(LList L){
    if(L.spt == 200) // Giả xử full là 200
        return 1;
    return 0;
}
