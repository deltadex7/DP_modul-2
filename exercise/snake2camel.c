#include <stdio.h>
#include <string.h>

#define snake_pos snake_var[i]
#define camelPos  camelVar[camelLength]


int main(int argc, char const *argv[])
{
    // variable in snake_case form
    char snake_var[100];
    scanf("%s", snake_var);
    int snake_length = strlen(snake_var);

    // variable in camelCase form
    char camelVar[100];
    // char length of camelVar
    int camelLength = 0;

    // boolean variable indicating a "snake" encounter
    unsigned char snake = 0;

    // do the conversion
    for (int i = 0; i < snake_length; ++i)
    {
        if (snake_pos == '_')
        {
            snake = 1;
            continue;
        }
        if ('A' <= snake_pos && snake_pos <= 'Z') {
            camelPos = snake? (snake_pos) : (snake_pos + 32);
            snake = 0; ++camelLength;
        }
        else {
            camelPos = snake? (snake_pos - 32) : (snake_pos);
            snake = 0; ++camelLength;
        }
        
    }

    // missed the null, better add one
    camelPos = '\0';

    printf("%s\n", camelVar);
    
    return 0;
}
