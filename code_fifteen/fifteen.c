#include <stdio.h>
#define ROWMAX 4
#define COLMAX 4
int main()
{
    int row , column ,y;
    for(row =1; row<=ROWMAX;++row)
    {
        for(column = 1; column<=COLMAX;++column)
        {
           y = row * column;
           printf("%4i ", y);
        }
    }
    return 0;
}