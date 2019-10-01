#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char txt[100];

    // This method is not safe, 
    // therefore not recommended 
    // gets(txt);

    // Use this instead
    fgets(txt, sizeof(txt), stdin);

    int vocals[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < strlen(txt); i++)
    {
        switch (txt[i])
        {
        case 'A':
        case 'a':
            ++vocals[0];
            break;
        
        case 'I':
        case 'i':
            ++vocals[1];
            break;
        
        case 'U':
        case 'u':
            ++vocals[2];
            break;
        
        case 'E':
        case 'e':
            ++vocals[3];
            break;
        
        case 'O':
        case 'o':
            ++vocals[4];
            break;
        
        default:
            break;
        }
    }
    
    printf("A/a : %d\n", vocals[0]);
    printf("I/i : %d\n", vocals[1]);
    printf("U/u : %d\n", vocals[2]);
    printf("E/u : %d\n", vocals[3]);
    printf("O/o : %d\n", vocals[4]);
    

    return 0;
}
