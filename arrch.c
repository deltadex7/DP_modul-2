#include <stdio.h>

int main(int argc, char const *argv[])
{
    // char[] size
    int n;
    scanf("%d", &n);

    // char array
    char arrch[n];

    // read and print string
    // catch: only reads one word
    scanf("%s", arrch);
    printf("%s\n", arrch);

    // read and print string
    // can read the whole line
    // BUG: reads the previous input
    //      instead of reading another
    gets(arrch);
    printf("%s\n", arrch);

    return 0;
}
