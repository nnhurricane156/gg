#include <stdio.h>
int main() {
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        if (c=='a'||c=='e'||c =='i'||c =='o'||c=='u')
            continue;
        else
            printf("%c - %d\n", c, c);
    }
    return 0;
}
