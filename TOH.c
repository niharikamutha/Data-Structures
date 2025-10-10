#include <stdio.h>
#include <stdlib.h>

void TOH(int n , char s , char d , char t)
{
    if(n==1)
        printf("Move %d disc from %c to %c \n",n , s ,d);
    else
    {
        TOH(n-1 , s , t , d);
        printf("Move %d dic from %c to %c \n",n,s,d);
        TOH(n-1 ,t , d,s);
    }
}

int main()
{
    int n;
    printf("Read number of disc: \n");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    int totalMoves = (1<<n)-1; //2^n-1 moves
    printf("Total number of moves = %d\n",totalMoves);

    return 0;
}
