#include "stdio.h"
#include "my_mat.h"
#define INT_MAX 999999


int caseA(int mat [10][10]) {
    insert(mat);

    return 0;
}

int caseB(int mat [10][10]) {
    int x,y; 
    scanf("%d",&x);
    scanf("%d",&y);
    has_path(mat,x,y);
    printf("\n");

    return 0;
}

int caseC(int mat [10][10]) {
    int x,y; 
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d",shortest_path(mat,x,y));
    printf("\n");

    return 0;
}

int main()
{
    int mat[10][10];
    char ch;
    
    scanf("%c",&ch);
    while(ch!='D' || ch!= EOF)
    {
        switch (ch)
        {
        case 'A': 
            caseA(mat); break;

        case 'B': 
            caseB(mat); break;

        case 'C': 
            caseC(mat); break;
        default: break;
        
        scanf("%c",&ch);
        }
    
    return 0;
    }
}
