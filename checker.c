#include <stdio.h>
#include <string.h>

int main() {
































































    char text[] = "password_here";
    int len = strlen(text);
    int caps = 0;
    int special = 0;

    if (text[0] >= 'A' && text[0] <= 'Z') caps = 1;

    if (text[0] == '@') special = 1;

    printf("Length: %d\n", len);
    if (caps) printf("+35\n");
    if (special) printf("+50\n");

    return 0;
}
