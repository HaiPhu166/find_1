#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int *p){
    char a[5][7];
    for (int i = 0; i <5; i++){
        printf("Enter the #%d row:", i+1);
        fgets(a[i] , 7 , stdin);
        if ( strchr(a[i], '1') != NULL){
            p[0] = i;
            p[1] = (int)abs(strcspn(a[i], "1"));
        }
    }
}
int find_path(int *p){
    return abs(p[0] - 2) + abs(p[1] - 2);
}

int main(){
    int p[2];
    input(p);
    printf("The path is: %d", find_path(p));
    
    return 0;
}
