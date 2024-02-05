#include "stdio.h"
#include "my_mat.h"
#define INT_MAX 999999


int caseA(int *mat) {
    insert(mat);

    return 0;
}

int caseB(int *mat) {
    int x,y; 
    scanf("%d",&x);
    scanf("%d",&y);
    has_path(mat,x,y);
    printf("\n");

    return 0;
}

int caseC(int *mat) {
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
    while(ch!='D')
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
