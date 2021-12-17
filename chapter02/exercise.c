#include<stdio.h>
#include<string.h>
#include<limits.h>

/* 习题2.11 begin*/
void inplace_swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void revese_array(int a[], int cnt){
    int first, last;
    for (first=0, last = cnt-1; first<last; first++, last--){
        inplace_swap(&a[first], &a[last]);

    }
}
/* 习题2.11 end*/

/* 习题2.25 start*/
/* WARNING: This is buggy code */
float sum_elements(float a[], int length){
    int i;
    float result = 0;

    for (i = 0; i<=length-1; i++)
        result += a[i];
    return result;
}
/* 习题2.25 end*/

/* 习题2.26 begin*/
int strlonger(char *s, char *t){
    return (strlen(s) - strlen(t)) > 0;
    // return strlen(s) > strlen(t);
}
/* 习题2.26 end*/
int main(){
    // /* 习题2.11 begin*/
    // int a[] = {1,2,3,4,5};
    // int cnt = sizeof(a) / sizeof(a[0]);
    // printf("length of a is: %d\n", cnt);
    // for (int i=0;i<cnt;i++){
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    // revese_array(a, cnt);
    // for (int i=0;i<cnt;i++){
    //     printf("%d ", a[i]);
    // }
    // /* 习题2.11 end*/

    // /* 习题2.25 start*/
    // float a[3] = {1.0,2.0,3.0};
    // printf("%.3f ", sum_elements(a ,3));
    // /* 习题2.25 end*/

    // /* 习题2.26 start*/
    // char a[] = "ab";
    // char t[] = "ab";
    // printf("%d", strlonger(a,t));
    // /* 习题2.26 end*/
    int x = INT_MIN;
    int y = 2147483648;
    printf("x = %d \n -x=%d", x, y);

    return 0;
}