float soma(int n) {
    if (n == 0) {
        return 0.0;
    } else if (n == 1) {
        return 1.0;
    }

    return 1.0/n + soma(n - 1);
}