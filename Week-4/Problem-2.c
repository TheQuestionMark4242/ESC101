#include <stdio.h>

int main(){
    int n, a, b, c,temp;
    scanf("%d",&n);
    while (n){
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        if (b<c){
            temp=b;
            b=c;
            c=temp;
        }   
        if (a<b){
            if (a<c){
                temp=a;
                a=b;
                b=temp;
                temp=b;
                b=c;
                c=temp;
            }
            else {
                temp=a;
                a=b;
                b=temp;
            }
        }
        if (b+c>a){
            printf("YES\n");
            switch(((b*b+c*c-a*a)>0)-((b*b+c*c-a*a)<0)){
                case 1:
                    printf("Acute\n");
                    break;
                case 0:
                    printf("Right\n");
                    break;
                case (-1):
                    printf("Obtuse\n");
                    break;
            }
        }
        else{
            printf("NO\n");
        }
        n--;
    }
	return 0;
}
