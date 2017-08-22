#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0; i<11; i++)
    {
        if(i==0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
