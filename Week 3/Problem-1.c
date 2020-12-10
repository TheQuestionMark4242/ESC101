#include<stdio.h>
int main()
{   
    int n,temp,trace=0;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&temp);
            if(i=j){
                trace+=temp;
            }
        }
    }
    printf("%d",trace);
    return 0;
}
