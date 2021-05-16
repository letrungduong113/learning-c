/*
* Hằng số: là 1 biến mà giá trị của nó không thay đổi trong suốt quá trình chạy chương trình
* - Hằng số có thể là bất kỳ kiểu dữ liệu nào
*/

/*
* Cách định nghĩa hằng số
* - <#define tên giá trị>
* - <const kiểu tên = giá_trị>;
* ex:
*/

  #define MAX 100
  #define PI 3.141592
  const int MIN = 500;
  const char BELL = 'a';


/*
* Hằng ký tự đặc biệt:
* - \\ : ký tự \
* - \? : ký tự ?
* - \' : ký tự '
* - \" : ký tự ""
* - \n : xuống dòng mới
* - \a : chuông
* - \t : tab ngang
* - \v : tab dọc
* - \b : backspace
*/


//  ---------------  THỰC HÀNH ---------------------- //

#include <stdio.h>
const int MOMO = 500;
#define MINF 1001
#define HELLO "Hello World"
int main() {
     printf("MOMO = %d\n", MOMO);
     printf("MINF = %d\n", MINF);
     printf("HELLO = %s\n", HELLO);
}
