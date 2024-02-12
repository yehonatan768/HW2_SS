#include "stdio.h"
#include "my_mat.h"
#define INT_MAX 999999




int main()
{
    int mat[10][10];
    char ch;
    int x,y;
    scanf("%c",&ch);
    while(ch!='D')
    {
    if (ch == 'A')
    {
        insert(mat);
    }
    else if (ch == 'B'){

        scanf("%d",&x);
        scanf("%d",&y);
        has_path(mat,x,y);
        printf("\n");
        
    }
    else if (ch == 'C')
    {
        scanf("%d",&x);
        scanf("%d",&y);
        printf("%d",shortest_path(mat,x,y));
        printf("\n");
    }
    scanf("%c",&ch);
    }
    
    return 0;
}
