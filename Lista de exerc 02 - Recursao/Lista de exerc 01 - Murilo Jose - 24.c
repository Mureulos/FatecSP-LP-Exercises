int somatoria(int n) {
    if (n == 0) 
        return 0;
    else
        return n + somatoria(n - 1);
}