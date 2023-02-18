#include<stdio.h>
int main(){
    int x,y, a[x][y]={2,3,4,5,6,3,2 ,7 ,8, 9},i,j;
scanf("%d%d",&x,&y);
for(i=0;i<x;i++){
    for(j=0;j<y;j++){

        printf("a[%d][%d]=%d\n",i,j,a[i][j]);
    }
}

return 0;
}
