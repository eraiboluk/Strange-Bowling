#include<stdio.h>

int main(){

    int n, x, x1, y1, y, a, i, top=1, odul=1;

    scanf("%d",&n);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&a);
    x1=x;
    y1=y;

    switch (a)
    {
    case 0:
        for(i=y-1;i>=0;i--){
            if(x!=0){
                x--;
                odul++;
            }
            if(x1!=n-1){
                x1++;
                odul++;
            }
            top+=odul;
        }
        break;
    
    case 1:
        for(i=x-1;i>=0;i--){
            if(y!=0){
                y--;
                odul++;
            }
            if(y1!=n-1){
                y1++;
                odul++;
            }
            top+=odul;
        }
        break;
    
    case 2:
        for(i=y+1;i<=n-1;i++){
            if(x!=0){
                x--;
                odul++;
            }
            if(x1!=n-1){
                x1++;
                odul++;
            }
            top+=odul;
        }
        break;

    case 3:
        for(i=x+1;i<=n-1;i++){
            if(y!=0){
                y--;
                odul++;
            }
            if(y1!=n-1){
                y1++;
                odul++;
            }
            top+=odul;
        }
        break;
    }
    printf("%d",top);
    return 0;

}