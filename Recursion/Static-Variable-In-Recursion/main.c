
#include <stdio.h>

int fun(int n){
    static int count = 0;
    if(n>0){
        count++;
        return fun(n-1)+count;
    }
    return 0;
}
int main() {
    int total = fun(5);
    printf("%d\n",total);
    return 0;
}

