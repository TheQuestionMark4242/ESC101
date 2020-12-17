#include <stdio.h>
int main()
{
    int n;
    char c;
    scanf("%d",&n);
    while(n){
        scanf("%c", &c);
        scanf("%c", &c);
        if(c!=' '){
            printf("%c",219-c);
        }
        else if (c==' '){
            printf(" ");
        }
        n--;
    }
	return 0;
}
