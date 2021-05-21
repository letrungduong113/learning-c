// Cấu trúc điều khiển lặp while

/*
* Cấu trúc điều khiển lặp: là lạp đi lặp lại một 1 công việc nào đó trong chương trình
*/

/*
* Cấu trúc tổng quát vòng lặp while: 
*/

// while(điều_kiện_lặp) { 
//     nội dung cân lặp ...
// }

/*
* - điều_kiện_lặp: là 1 giá trị biểu thức hoặc giá trị có tính đúng sai
* - nội dung cân lặp: có thể là 1 hay nhiều cầu lệnh trong thân vòng lặp while
*/
/*
* In ra màn hình từ 1 - 100
*/
#include <stdio.h>

int main() {
    int i = 1; // đặt giá bắt đầu là 1
    while(i <= 100) { // kiểm tra xem i có nhở hơn hoặc bằng 100 không để thực hiện lặp in ra từ 1 - 100
    // nếu i lớn hơn 100 thì không thỏa mãn tính đúng/sai của while nên sẽ thoát vòng lặp chạy đến hàm tiếp theo
        printf("%d\n", i);
        ++i;
    }   
}