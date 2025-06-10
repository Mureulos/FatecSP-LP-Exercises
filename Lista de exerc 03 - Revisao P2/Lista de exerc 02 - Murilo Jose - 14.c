void strcat(char *s, const char *t) {
    int len_s = strlen(s);
    int i = 0;
    
    while (t[i] != '\0') {
        s[len_s + i] = t[i];
        i++;
    }
    
    s[len_s + i] = '\0'; 
}