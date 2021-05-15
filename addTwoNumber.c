// Chương trình cộng 2 số nguyên
#include <stdio.h>
int main() {
	/*
	* ? Khai báo biến
	* int: tên kiểu dữ liệu mà biến đó sẽ chứa
	* number1/number2: tên của biến
	*/ 
	int number1;
	int number2;
	/*
	* ? Nhập dữ liệu và lưu ở các biến
	* puts: làm nhiệm vụ hiển thị thông điệp ra màn hình
	* scanf: đọc dữ liệu user nhập vào từ bàn phím
	* scanf có 2 tham số: tham số thứ nhất là nhập vào định dạng chuyển đổi, tham số thứ 
	* 2 là biến dùng để lưu trữ giá trị nhập vào từ bàn phím
	*/ 
	puts("Nhập số nguyên thứ nhất: ");
	scanf("%d", &number1);

	puts("Nhập số nguyên thứ hai: ");
	scanf("%d", &number2);
	// cộng 2 số nguyên
	int sum = number1 + number2;
	// in kết quả ra màn hình

	printf("%d + %d = %d\n", number1, number2, sum);

}