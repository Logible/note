bool Delete_Same(SeqList &L)
{
    if (L.length == 0)
        return false;
    int i, j; // i存储第一个不相同的元素，j为工作指针
    for (i = 0, j = 1 : j < L.length : j++)
        if (L.data[i] != L.data[j])  //查找下一个与上个元素值不同的元素
            L.data[++i] = L.data[j]; //找到后，将元素前移
    L.length = i + 1;
    return true;
}