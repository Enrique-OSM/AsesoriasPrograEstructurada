
#include <stdio.h>

int main()
{
    int count = 10; 
    for (int i = 1; i != count; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        printf("numero impar %i\n",i);
    }
    
    return 0;
}