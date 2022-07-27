// Write a program to draw the following pattern:
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA   
// AB         BA  
// A           A
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 7; i++)
    {
        int k = 'A';
        for (int j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c", j < 7 ? k++ : k--);
            }
            else
            {
                if (j == 9 - i)
                    k--;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
