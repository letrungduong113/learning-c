// Minh họa sử dụng cấu trúc if-else

#include <stdio.h>
int main() {
    int a = 0, b= 10;
    char c ='\0'; // '\0' tương đương vs null
    char d = 'D';
    /*
    * Nếu giá trị là 0 hoặc null thì biểu thức điều kiện đánh giá là sai
    */
    if(a) {
        printf("Điều kiện đúng\n");
    } else {
        printf("Điều kiện sai\n");
    }

    if(c) {
        printf("Điều kiện đúng\n");
    } else {
        printf("Điều kiện sai\n");
    }

     if(b) {
        printf("Điều kiện đúng\n");
    } else {
        printf("Điều kiện sai\n");
    }

      if(d) {
        printf("Điều kiện đúng\n");
    } else {
        printf("Điều kiện sai\n");
    }
    return 0;
}