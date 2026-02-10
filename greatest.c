#include <stdio.h>
#include  <math.h>
int main(){
    int a,b,c;
    printf("THE FIRST NO:");
    scanf("%d",&a);
    printf("THE SECOND NO:");
    scanf("%d",&b);
    printf("THE THIRD NO:");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("a is the greatest no");
        }
    else if(b>c){
        printf("b is the greatest");
    }
    else{
        printf("c is the greatest");
    }
    return 0;
}