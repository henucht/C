#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[10];
    srand((unsigned)time(NULL));
    for (int i=0;i<10;i++){
        a[i]=rand()%101+100;
        printf("%d\t", a[i]);
    }

}
