#include <stdio.h>
#include<string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for(int i=0; i<len; i++){
        printf("%.2x ", start[i]); //start[i] 表示以start指向的位置为起始的第i个位置处的字节。
    }
    printf("\n");
}
void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}


void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);

}

void simple_show_a(){
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
}

void simple_ctring(){
    char *s = "12345";
    show_bytes((byte_pointer) s, 6);
}

// 习题2.7
void string_len(){
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
}

// 习题2.10
void inplace_swap(int *x, int *y){
    *y = *x ^ *y; //step 1
    *x = *x ^ *y; //step 2
    *y = *x ^ *y; //step 3

}


// one_complement
void one_complement(){
    short x = 12345;
    short mx = -x;
    show_bytes((byte_pointer) &x, sizeof(short));
    show_bytes((byte_pointer) &mx, sizeof(short));
}

void unsigned2int(){
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v=%d , uv = %u\n", v, uv);
}
int main(){
    // int val=12345;
    // test_show_bytes(val);
    // simple_show_a();
    // simple_ctring();
    // string_len();
    
    // int x= 2;
    // int y =4;
    // printf("x=%d, y=%d\n",x,y);
    // inplace_swap(&x, &y);
    // printf("x=%d, y=%d\n",x,y);

    // one_complement();
    unsigned2int();

}