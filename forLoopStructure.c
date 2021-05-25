// Cấu trúc lặp for

/*
* for(giá_trị_khởi_tạo; điều_kiện_lặp; bước_nhảy) {
*  // nội dung cần lặp
* }
* - giá_trị_khởi_tạo: chỉ được thực hiện 1 lần trước khi vòng lặp đầu tiên chạy
* - điều_kiện_lặp: biểu thức hoặc giá trị có tính đúng/sai
* - bước_nhảy: là cách thay đổi giá trị của biến điều kiện
*/

/*
* Cách thức lặp:
* - B1: Khởi tạo giá trị cho biến lặp( tùy chọn)
* - B2: Sau đó điều kiện lặp sẽ được kiểm tra, nếu thỏa mãn điều kiện lặp sẽ thực hiện các câu lệnh trong thân vòng lặp và thực hiện bước n
* - B3: Thực hiện đi thực hiện lại B2 cho tới khi điều kiện không còn thỏa mãn thì sẽ chạy xuống câu lệnh tiếp theo
* Nếu khuyết 3 thành phần: giá_trị_khởi_tạo, điều_kiện_lặp, bước_nhảy thì sẽ trở thành vòng lặp vô hạn ( không bao giờ emit value)
*/

#include <stdio.h>

// Ex: Tính tổng các số nguyên dương từ 1 - 9

int main() {
    int sum = 0, i ;
    for(i = 0; i < 10; ++i) {
        // giá_trị_khởi_tạo: i = 0
        // điều_kiện_lặp: i< 10
        // bước_nhảy: ++i (mỗi lần thực hiện lặp xong thì giá trị tăng lên 1)
        sum += i;
    }
    printf("Tổng là %d\n", sum);
}

/*
* Vòng lặp vô hạn
*/

int main() {
    int sum = 0, i;
    for( ; ; ) {
        sum += i;
        ++i;
    }
     printf("Tổng là %d\n", sum);
}