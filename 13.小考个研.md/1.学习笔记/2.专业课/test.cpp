// S是主串, T是模式串
int Index(SString S, SString T, int next[])
{
    int i = 1;
    j = 1;
    while (i <= S.length && j <= T.length)
    {
        if (j == 0 || S.ch[i] == T.ch[j]) //继续比较后继字符
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];
        }
    }
    if (j > T.length) //匹配成功,j=length+1;
        return i - T.length;
    else
        return 0;
}