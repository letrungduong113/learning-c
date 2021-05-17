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
