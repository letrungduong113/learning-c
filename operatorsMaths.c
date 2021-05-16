// Toán tử - Phép toán

/*
* Toán tử toán học: + - * / % ++ --
* Toán tử so sánh: == != > >= < <=
* Toán tử logic: && || !
* Toán tử gán: = += *= -= /= %=
*/

/*
* Toán tử 2 ngôi: là phép toán mà toán tử cần 2 toán hạng ở bên trái, phải mới thực hiện được
* - ex: a/b, a % b ....
* Toán tử 1 ngôi: là phép toán mà toán tử chỉ cần 1 toán hạng ở bên trái hoặc phải là thực hiện được
* ex: i++, ++i, !b
*/

/*
* Phép chia nguyên (/): là phép chia hết giữa a và b 
* Phép chia dư (%): là phần dư còn lại sau khi thực hiện phép chia hết
*/


#include <stdio.h>
int main() {
    int a = 100, b = 200;
    int c , d;
    // Phân biệt a++ và ++a / a-- và --a: 
    c = ++a; // output: 101 vì ++a sẽ là phép toán được ưu tiên trước nên thức hiện trước
    // mà ++a lúc này bằng a + 1 = 101 nên c = 101 (tăng trước sau mới gán)
    a=100; // sử dụng phép gán gán lại giá trị của a
    d = a++; // outut: 100 vì a++ là phép toán được ưu tiên sau, cón phép toán được ưu tiên trước
    // là d = a mà a = 100 nên phép gán này d = a và = 100 (gán trước sau mới tăng)
    printf("Kết quả 1 là:  c = %d\n", c);
    printf("Kết quả 2 là:  d = %d\n", d);
    return 0;
}