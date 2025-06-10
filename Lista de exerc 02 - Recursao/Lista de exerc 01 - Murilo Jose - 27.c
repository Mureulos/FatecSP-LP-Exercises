int pred(int i) { 
    return i - 1; 
}

int succ(int i) { 
    return i + 1; 
}

int soma(int m, int n) {
    if (m == 0)
        return n;
    else 
        return soma(pred(m), succ(n));
}