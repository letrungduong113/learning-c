/*
* ? Các kiểu số nguyên
* | Kiểu                  |            Kích thước (byte)    |   Khoảng giá trị
* | char                  |          1 byte                 |      -128 to 127 or 0 to 255
* | int                   |          2 or 4 byte            |      -32768 to 32767 or -2147483648 to -2147483647
* | short                 |          2 byte                 |      -32768 to 32767
* | long                  |          4 byte                 |      -2147483648 to -2147483647
*/


/*
* ? Các kiểu số thực
* | Kiểu                  |            Kích thước (byte)    |   Khoảng giá trị
* |  float                |          4 byte                 |      1.2E-38 to 3.4E+38
* |  double               |          8 byte                 |      2.3E-308 to 1.7E+308
* | long double           |          10 or 16 byte          |      3.4E-4932 to 1.1E+4932
*/

#include <stdio.h>
int main() {
    printf("Kích thước của kiểu int: %d\n", sizeof(int));
    printf("Kích thước của kiểu char: %d\n", sizeof(char));
    printf("Kích thước của kiểu long: %d\n", sizeof(long));
    printf("Kích thước của kiểu short: %d\n", sizeof(short));
    printf("Kích thước của kiểu float: %d\n", sizeof(float));
    printf("Kích thước của kiểu double: %d\n", sizeof(double));
    printf("Kích thước của kiểu long double: %d\n", sizeof(long double));
    return 0;
}