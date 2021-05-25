// Cấu trúc điều khiển lặp do-while

/*
* Cấu trúc tổng quát
* do {
* // nội dung cần lặp
* } while(điều_kiện_lặp);
* - điều_kiện_lặp: biểu thức hoặc giá trị có tính đúng/sai
* - nội dung cần lặp: câu lệnh lặp trong chương trình, được thực hiện ít nhất 1 lần
*/
// Ex: Thực hiện tính tỏng từ 1-9
#include <stdio.h>
int main() {
    int sum = 0, i= 1;
    do {
        sum += i;
        ++i;
    } while(i < 10);
    printf("%d\n", sum);
}

int main() {
    int sum = 0, i= 100;
    do {
        sum += i;
        ++i;
    } while(i < 10);
    printf("%d\n", sum);
}

// output: sum = 100 vì trong vòng lặp do-while nội dung lặp sẽ thực hiện ít nhất 1 lần, đầu tiên vào do lấy giá trị i cộng vào sum là 100,
// sau đó +1 bằng 101 không thỏa mãn nhỏ hơn 10 nên sẽ kết thúc

// Ex: Nhập vào số nguyên dương từ bàn phím

int main() {
    int a;
   
    do {
        puts("Nhập váo số: ");
        scanf("%d",&a);
    } while( a <= 0);
}