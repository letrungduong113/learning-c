#include <stdio.h>
/*
* Bài 1: Viết chương trình in ra nội dung của một chuỗi kí tự nào đó. Ví dụ: “Hello
* World!”.
*/

int main() {
    printf("Hello World!\n");
}

/*
* Bài 2: Nhập vào một số nguyên n, hãy cho biết số đó chẵn hay lẻ, âm hay dương, in
* kết quả kiểm tra ra màn hình. Mỗi kết luận trên một dòng.
*/

int main() {
    int number;
    puts("Nhập vào số cần kiểm tra");
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("Đây là số chắn!\n");
    }
    else {
         printf("Đây là số lẻ!\n");
    } 

    if(number > 0) {
         printf("Đây là số dương!\n");
    }
    else  {
         printf("Đây là số âm!\n");
    }
    return 0;
}

/*
* Bài 3: Nhập vào hai số nguyên a, b. In ra màn hình tổng, hiệu, tích, thương a/b của
* chúng. Lưu ý khi xử lý phép chia sẽ cần ép kiểu, kiểm tra mẫu khác 0. Xuất
* kết quả ra màn hình.
*/

int main() {
    int a, b;
    // Nhập giá trị từ bàn phím a, b và lưu vào biến a, b
    puts("Nhập giá trị cho số a: ");
    scanf("%d", &a);

    puts("Nhập giá trị cho số b: ");
    scanf("%d", &b);


    // tổng 2 số nguyên
    int tongHaiSo = a + b;
    printf("giá trị tổng 2 số = %d\n", tongHaiSo);

    // hiệu 2 số nguyên
    int hieuHaiSo = a - b;
    printf("giá trị hiệu 2 số = %d\n", hieuHaiSo);

    // tổng 2 số nguyên
    int nhanHaiSo = a * b;
    printf("giá trị nhân 2 số = %d\n", nhanHaiSo);

    // chia 2 số nguyên
    // ép kiểu cách 1: 
    float chiaNguyenHaiSo = (float) b / a;

    // ép kiểu cách 2:
    // float chiaNguyenHaiSo = 1.0 * b / a;
   
    if(b == 0) {
        printf("giá trị số b phải khác 0\n");
    } else {
        printf("giá trị chia 2 số = %f\n", chiaNguyenHaiSo);
    }
}
