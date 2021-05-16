/*
* Biến: là vùng nhớ của chương trình dùng để lưu trữ dữ liệu và được đặt tên:
* các dữ liệu đầu vào lấy từ file, do user nhập vào, kết quả đầu ra sau khi tính toán,...
* Đặc trưng:
* - Mỗi biến có 1 kiểu dữ liệu nhất định
* - Biến phải được khai báo trước khi sử dụng
* - Biến phân biệt chữ hoa, chữ thường: an, AN, An là 3 biến khác nhau
* - Kiểu của biến quy định các phép toán mà biến có thể thao tác
* Cách khai báo biến: <kiểu_dữ_liệu danh_sách_tên_biến>;
* - Kiểu dữ liệu: là kiểu hợp lệ trong ngôn ngữ C (char,int,long,short, float, double, long double...)
* - Danh sách tên biến: là các tên do người dùng tự đặt
* ex: int firstValue, secondValue;
* ex: char c, d, e, f;
* Đặt tên cho biến: 
* - Tên biến phải bắt đầu bằng chữ cái đầu hoặc dấu (_)
* - Tên biến phải mang 1 ý nghĩa nào đó (ex: firstValue, ...)
* - Tên biến dài hơn 1 từ thì chữ cái đầu mỗi từ phải viết hoa
* - Tên biến không được trùng vs các keyword trong thư viện C
*/

/*
* ex
* - int toanHang1, toanHang2;
* - double laiSuat;
* - char kyTu;
* Có thể khởi tạo luôn giá trị cho biến khi khai báo
* ex:
* - init khaiBaoBien = 10;
* - char bienMoi = 'C';
*/


/*
* Các loại biến
* - Biến toàn cục: được sử dụng trong toàn chương trình, khai báo ở ngoài tất cả các hàm, khối
* - Biến cục bộ: khai báo trong hàm, khối, chỉ sử dụng được trong hàm, khối kể từ sau vị trí nó được khai báo
* - Biến hình thức: 
*/

int toanHang1, toanHang2; // biến toàn cục
int main() {
    int var1, var2; // biến cục bộ
    float bienCucBo; // biến cục bộ
}