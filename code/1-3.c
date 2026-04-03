#include <stdio.h>

void print_reverse(int *arr,int size) {
    for(int *p=&arr[size-1];p>=&arr[0];p--){
        printf("%d",*p);
        if(p!=&arr[0])
            printf(" ");
    }

}

int main(){
    int nums[] = {1,2,3,4,5};

    print_reverse(nums,5);
    printf("\n");

    return 0;
}