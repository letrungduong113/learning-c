// Cấu trúc rẽ nhánh switch-case
/*
* Câu hỏi: Con chó di chuyển bằng mấy chân?
* - A: 1
* - B: 2
* - C: 3
* - D: 4
* Cách làm
* - Cho user nhập vào đáp án và kiểm tra
* - Trường hợp 1: user nhập đáp án sai -> báo lỗi
* - Trường hợp 2: user nhập đáp án đúng -> báo chính xác
* - Trường hợp 3: user nhập vào đáp án không nằm trong bộ đáp án -> báo đáp án nhập vào
*   nằm ngoài list đáp án cung cấp 
*/

/*
* Switch-case
* - Có nhiều nhánh hơn if-else
* - Thường được sử dụng trong trường hợp nhiều trường hợp đánh giá
* Gồm 3 thành phần chính
* - Switch
* - Sau switch là tham số ( kiểu nguyên, char, liệt kê tức kiểu enum)
* - Mỗi 1 case là 1 trường hợp, nếu như lựa chọn ứng vs trường hợp nào thì code sẽ thực hiện từ trên xuống, 
*   gặp lệnh break đầu tiên thì sẽ thoát lệnh và thực hiện tiếp lệnh tiếp theo, mỗi 1 case có 1 break
* - default (tùy chọn): chỉ ra tất cả các case mà khồng trùng vs trường hợp nào thì nó sẽ chạy vào default
*/

#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Nhập vào đáp án của bạn\n A: 1\n B: 2\n C: 3\n D: 4\n");
    char luaChonDapAn = getchar();
    switch(luaChonDapAn) {
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'C':
        case 'c':
        {
            printf("Đáp án của bạn không đúng\n");
            break;
        }
        case 'd':
        case 'D':
        {
              printf("Đáp án của bạn đúng\n");
            break;
        }
        default:
        {
            printf("Đáp án của bạn không hợp lệ\n");
            break;
        }
    }
}