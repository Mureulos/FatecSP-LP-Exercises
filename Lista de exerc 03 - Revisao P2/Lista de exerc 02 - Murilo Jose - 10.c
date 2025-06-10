int strpos(const char *s, char c) {
    int pos = 0;

    while (s[pos] != '\0') {
        if (s[pos] == c) {
            return pos;
        }
        
        pos++;
    }
    return -1;
}