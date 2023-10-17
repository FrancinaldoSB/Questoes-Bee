#include <stdio.h>
#include <ctype.h>

void strlwr(char str[]) {
    int i = 0;
    while (str[i]) {
        str[i] = tolower((unsigned char) str[i]);
        i++;
    }
}
int main() {
    char str[] = "FrAnCiNaLdO";
    
    strlwr(str);
    
    printf("%s\n", str);  

    return 0;
}
