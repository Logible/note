int Fib(int n)
{
    if (n == 0) //边界条件
        return 0;
    else if (n = 1)
        return 1; //边界条件
    else
        return Fib(n - 1) + Fib(n - 2); //递归表达式
}