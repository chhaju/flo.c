// Complete the Code

#include <stdio.h>

int main() {
    int T,X,Y;
    printf("Enter a X: ");
    scanf("%d",&X);
    printf("Enter a y: ");
    scanf("%d",Y);
    int i = 1;
    printf("Enter a T: ");
    scanf("%d", &T );
    while (i <= T){
        scanf("%d %d", &X,&Y);
        X = T*Y;
        T++; 
        printf("%d",X);
    }
    return 0;
}
