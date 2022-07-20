bool delete_s_t(Sqlist &L, ElemType s, ElemType t)
{
    int i, k = 0;
    if (L.length == 0 || s >= t)
        return false;
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] >= s && L.data[i] <= t)
            k++;
        else
            L.data[i - k] = L.data[i]; //当前元素前移k个位置
    }
    L.length -= ;
    return true;
}