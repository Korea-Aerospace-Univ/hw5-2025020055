#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    bool found=false;
    
    for (int a=1; a<=(N/900); a+=1){
        for (int b=2; b<=(N/750); b+=2){
            for(int c=1; c<=(N/200); c+=1){
                if (c<a||c<b) {
                    if (900*a+750*b+200*c==N){
                        printf("%d %d %d\n", a, b, c);
                        found=true;
                    }
                }
            }
        }    
    }
    if (found==false) 
        printf("none");
    return 0;
}
