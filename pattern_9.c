// Write a program to draw the following pattern:
// 1234321
//  12321
//   121
//    1

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {   int k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if(j>=i && j<=8-i){
                printf("%d",j<4?k++:k--);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
