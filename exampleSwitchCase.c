//  Minh họa sử dụng cấu trúc switch-case

#include <stdio.h>
/*
* Viết chương trình cho phép người dùng lựa chọn chức năng: cộng, trừ, nhân, chia 2 số nguyên
* hoặc thoát khỏi chương trình
*/
int main() {
    int a,b, ketQua;

    // Cho người dùng nhập vào lựa chọn dùng của mình
    printf("Vui lòng nhập vào lựa chọn của bạn\n 1: Cộng 2 số nguyên\n 2: Trừ 2 số nguyên\n 3: Nhân 2 sô nguyên\n 4: Chia 2 số nguyên\n 5:Thoát\n");
    char luaChon = getchar();


    puts("Nhập vào số nguyên a");
    scanf("%d",&a);
    puts("Nhập vào số nguyên b");
    scanf("%d",&b);
    
    // Sử dụng switch-case xử lí từng lựa chọn của user
    switch(luaChon) {
        case '1': {
            ketQua = a + b;
            printf("Kết quả của cộng 2 số nguyên %d\n", ketQua);
            break;
        }
         case '2': {
            ketQua = a - b;
            printf("Kết quả của trừ 2 số nguyên %d\n", ketQua);
            break;
        }
        case '3': {
            ketQua = a * b;
            printf("Kết quả của nhân 2 số nguyên %d\n", ketQua);
            break;
        }
        case '4': {
            if(b == 0) {
                printf("Số b phải khác 0 phép chia mới thực hiện được\n");
            } else {
                ketQua = a / b;
                printf("Kết quả của chia 2 số nguyên %d\n", ketQua);
                break;
            }
        }

        case '5': {
            printf("Bạn đã thoát chương trình thành công\n");
            break;
        }

        default: {
            printf("Lựa chọn của bạn chưa đúng, vui lòng nhập lại\n");
            break;
        }
        
    }
}



/*
* Nhập tháng số in ra tên tháng
*/

int main() {
    int month;
    puts("Nhập vào tháng số");
    scanf("%d", &month);
    switch (month) {
        case 1: {
            printf("Tháng một\n");
            break;
        }
         case 2: {
            printf("Tháng hai\n");
            break;
        }
        case 3: {
            printf("Tháng ba\n");
            break;
        }
        case 4: {
            printf("Tháng tư\n");
            break;
        }
        case 5: {
            printf("Tháng năm\n");
            break;
        }
        case 6: {
            printf("Tháng sáu\n");
            break;
        }
        case 7: {
            printf("Tháng bảy\n");
            break;
        }
        case 8: {
            printf("Tháng tám\n");
            break;
        }
        case 9: {
            printf("Tháng chín\n");
            break;
        }
        case 10: {
            printf("Tháng mười\n");
            break;
        }
        case 11: {
            printf("Tháng mười một\n");
            break;
        }
         case 12: {
            printf("Tháng mười hai\n");
            break;
        }
        default: {
            printf("Bạn nhập vào tháng số không hợp lệ\n");
            break;
        }
}
}