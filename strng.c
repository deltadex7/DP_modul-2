#include <stdio.h>

// the following contains the functions
// to handle strings (char arrays)
#include <string.h>

int main(int argc, char const *argv[])
{
    char txt[16];

    // reads a string (with newline)
    fgets(txt, sizeof(txt), stdin);

    printf(txt);

    return 0;
}
