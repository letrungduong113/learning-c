// Các chuẩn vào ra dữ liệu
#include <stdio.h>
int main() {
    char c; // %c
    // scanf("%c", &c);
    // printf("Giá trị của biến char c = %c\n", c);
    short s; // %hi
    // scanf("%hi", &s);
    // printf("Giá trị của biến short s = %hi\n", s);
    unsigned short us; // %hu
    int i; // %i , %d
    unsigned int ui; // %u 
    long j; // %li, %ld
    long long ll; // %lli , %lld
    unsigned long long ull; // %llu
    float f; // %f 
    double d; // %lf , %lF
    scanf("%lf", &d);
    printf("Giá trị của biến double d = %lf\n", d);
}

/*
 * Định dạng nhập xuất chuẩn: đối với mỗi kiểu dữ liệu thì khi nó xuất ra sẽ có 1 kiểu dữ liệu nhất định
 */