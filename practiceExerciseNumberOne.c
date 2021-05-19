#include <stdio.h>
#include <math.h>
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

/*
* Bài 8: Giải và biện luận phương trình bậc nhất a𝑥 + b = 𝟎
*/
/*
* Cách làm: 
* - Khai báo 3 số thực a,b, x
* - Nếu a = 0, b # 0 thì phương trình vô nghiệm do mẫu = 0 thì không chia được
* - Nếu a # 0, b = 0 thì phương trình có vô số nghiệm
* - Nếu a # 0 && b # 0 thì nghiệm phương trình là x = -b/a
*/

int main() {
     float a,b, x;

     puts("Nhập số thực a: ");
     scanf("%f", &a);
     puts("Nhập số thực b: ");
     scanf("%f", &b);
     if(a == 0 && b != 0) {
          printf("Phương trình không có nghiệm\n");
     } else if (a !=0  && b == 0) {
           printf("Phương trình có vô số nghiệm\n");
     } else {
          x = -b/a;
          printf("Phường trình có nghiệm x = %f\n", x);
     }
     
     return 0;
}


/*
* Bài 9: Giải và biện luận phương trình bậc 2: a𝑥2+b𝑥1+c=𝟎
*/

int main() {
    float a,c,b, x, denTa, x1, x2;
    puts("Nhập vào số a: ");
    scanf("%f", &a);
    puts("Nhập vào số b: ");
    scanf("%f", &b);
    puts("Nhập vào số c: ");
    scanf("%f", &c);

    denTa = b*b - 4*a*c;
    float phepTinh1 = -b + sqrt(denTa);
    float phepTinh2 = 2* a;
    float phepTinh3 = -b - sqrt(denTa);
    printf("console.log %f\n", denTa);
    if(denTa < 0) {
        printf("Phương trình vô nghiệm\n");
    } else if (denTa == 0) {
        x = -b/(2*a);
        printf("Phương trình có nghiệm kép = %f", x);
    } else {
        x1 = phepTinh1 / phepTinh2;
        x2 = phepTinh3/ phepTinh2;
        printf("Phương trình có 2 nghiệm %f, %f\n", x1, x2);
    }
}


/*
* Bài 10: Nhập vào ba số a, b, c (là các số thực không âm). Kiểm tra xem đó có phải là ba cạnh của một tam giác hay không.
*/

int main() {
     int a,b,c;
     puts("Nhập vào cạnh a:");
     scanf("%f", &a);
     puts("Nhập vào cạnh b:");
     scanf("%f", &b);
     puts("Nhập vào cạnh c:");
     scanf("%f", &c);

     if(a + b > c && b+ c > a && c + a > b) {
          printf("giá trị a,b,c là 3 cạnh tam giác");
     } else {
           printf("giá trị a,b,c không là 3 cạnh tam giác");
     }
}