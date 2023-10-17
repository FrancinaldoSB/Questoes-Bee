#include <stdio.h>
#include <ctype.h>

void strupr(char str[]) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper((unsigned char) str[i]);
        i++;
    }
}
int main() {
    char str[] = "francinaldo";
    
    strupr(str);
    
    printf("%s\n", str); 

    return 0;
}
