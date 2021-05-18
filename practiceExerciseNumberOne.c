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

/*
* Bài 4: Nhập vào hai số nguyên a, b. So sánh xem số nào lớn hơn, số nào nhỏ hơn
* hay hai số bằng nhau. In kết quả ra màn hình. 
*/


int main() {
    int a,b;
    puts("Nhập vào giá trị a: ");
    scanf("%d", &a);
    puts("Nhập vào giá trị b: ");
    scanf("%d", &b);

    if(a == b) {
        printf("giá trị của a và b là bằng nhau\n");
    } else if (a > b) {
        printf("giá trị của a lớn hơn b\n");
    } else {
        printf("giá trị của a nhỏ hơn b\n");
    }
}

/*
* Bài 5: Hãy nhập 4 số nguyên a, b, c, d. Tìm giá trị lớn nhất của chúng và gán giá trị
* lớn nhất đó cho biến max. In giá trị max tìm được ra màn hình. Trong trường
* hợp 4 số bằng nhau thì in ra: không có số lớn nhất. 
*/

/*
* Cách làm: 
* - Khai báo 4 số nguyên a ,b, c, d
* - Khai báo biến max = a;
* - Nếu b > max thì biến max = b, c > max thì biến max = c, d > max thì biến max = d
* - Kiểm tra xem 4 số a,b, c, d bằng nhau khồng thì in ra kết quả 4 số bằng nhau còn không thì in ra biến max
*/

int main() {
    int a ,b, c, d;
    puts("Nhập vào giá trị a: ");
    scanf("%d", &a);
    puts("Nhập vào giá trị b: ");
    scanf("%d", &b);
    puts("Nhập vào giá trị c: ");
    scanf("%d", &c);
    puts("Nhập vào giá trị d: ");
    scanf("%d", &d);
  int max = a;
  if(b > max) {
       max = b;
  }
   if(c > max) {
        max = c;
   }
   if(d > max) {
        max = d;
   }

   if( a == b && b == c && c == d) {
        printf("4 số bằng nhau");
   } else {
        printf("giá trị của max = %d\n", max);
   }
    return 0;
}
/*
* Bài 6: Viết chương trình nhập vào hai cạnh của hình chữ nhật và tính chu vi và diện tích của hình chữ nhật đó. Hiển thị kết quả lên màn hình.
*/

int main() {
     int a,b;
     puts("Nhập vào chiều dài hình chữ nhật: ");
     scanf("%d", &a);
     puts("Nhập vào chiều rộng hình chữ nhật: ");
     scanf("%d", &b);

     int chuViHCN = 2 * (a + b);
     int dienTichHCN = a * b;
     printf("Chu vi HCN chuViHCN = %d\n", chuViHCN);
     printf("Diện tích HCN dienTichHCN = %d\n", dienTichHCN);
}

/*
* Bài 7: Viết chương trình nhập bán kính của hình tròn và tính chu vi, diện tích hình tròn đó.
*/

int main() {
     const float PI = 3.141592;
     int a;
     puts("Nhập vào bán kính hình tròn: ");
     scanf("%d", &a);
     float dienTichHinhTron = (float) PI * a;
     float chuViHinhTron = (float) 2 * PI * a;
     printf("Diện tích hình tròn dienTichHinhTron = %f\n", dienTichHinhTron);
     printf("Chu vi hình tròn chuViHinhTron = %f\n", chuViHinhTron);
}