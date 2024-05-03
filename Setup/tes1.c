#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int x=0,y=0;
    x= N/10;
    y= N%10;

    if(N==10){
        printf("NO");
    }
    else if (x%y==0 || y%x==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}