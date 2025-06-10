void strdel(char *s, int p) {
    if (p < 0 || p >= strlen(s)) {
        return;
    }
    strcpy(s + p, s + p + 1);
}