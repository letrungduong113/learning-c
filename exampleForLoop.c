// Bài tập vận dụng vòng lặp for

// Bài 1: Nhập 1 số nguyên n, xuất tổng từ 1 đến n.
int main() {
    int n, i, sum = 0;
    puts("Nhập vào số nguyên: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        sum = sum + i;
    }

    printf("Tổng %d\n", sum);
}

//Bài 2: Nhập 1 số nguyên n, xuất tổng các số lẻ từ 1 đến n

int main() {
    int n, i, sum = 0;
    puts("Nhập vào số nguyên: ");
    scanf("%d", &n);
    for(i = 0; i <= n; ++i) {
        if(i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}

//Bài 3: Nhập vào số nguyên n, kiểm tra xem phải là số nguyên tố hay không


int main() {
        int a, i, k = 0;
        puts("Nhập vào số nguyên: ");
        scanf("%d", &a);

        for(i = 1; i <= a; ++i) {
            if(a % i == 0) {
                ++k;
            }
        }
        if(k == 2) 
            printf("Là số nguyên tố\n");
         else printf("Không phải số nguyên tố\n");
}

// Bài 4: Nhập số tự nhiên n sau đó in ra các số chẵn nhỏ hơn n và các số lẻ nhỏ
// hơn n.
int main () {
    int a;
    puts("Nhập vào số tự nhiên: ");
    scanf("%d", &a);
    if(a < 0) {
        printf("Đây không phải số tự nhiên");
    } else {
        for(int i = 0; i < a; ++i) {
            if(i % 2 == 0) continue;
            printf("Số lẻ là %d\n", i);
        }
        for(int i = 0; i < a; ++i) {
            if(i % 2 != 0) continue;
            printf("Số chẵn là %d\n", i);
        }
    }
}

// Bài 5: Nhập số tự nhiên n rồi tính tổng: S = 1 + 2 + ... + n

int main() {
    int a, sum = 0;
    puts("Nhạp vào số tự nhiên");
    scanf("%d", &a);
    if(a < 0) 
        printf("Số nhập vào không hợp lệ");
    else {
        for(int i = 0; i <= a; ++i) {
            sum = sum + i;
        }
        printf("Tổng từ 1 đến a %d\n", sum);
    }
}



// Bài 6: Nhập số tự nhiên n rồi tính tổng(lưu ý phép chia các số nguyên):
// S = 1 + 1/2 + 1/3 + ... + 1/n

int main() {
    int a ;
    double sum = 0;
    puts("Nhập vào số tự nhiên");
    scanf("%d", &a);
    if(a == 0) 
        printf("Nhập số khác 0");
    else {
        for(int i = 1; i <= a; i++) {
            sum = sum + (double) 1/i;
        }
        printf("Đáp án %lf\n", sum);
    }
}

// Bài 7: Nhập vào một số tự nhiên n rồi tính:
// S = tổng các số tự nhiên không lớn hơn n.
// S1 = tổng các số tự nhiên lẻ không lớn hơn n.
// S2 = tổng các số tự nhiên chẵn không lớn hơn n.

int main() {
    int a, S = 0, S1 = 0, S2 = 0;
    puts("Nhập vào số tự nhiên");
    scanf("%d", &a);

    if(a < 0) 
        printf("Số bạn nhập chưa hợp lệ");
    else {
            for(int i = 0; i < a; ++i) {
                S = S + i;
            }

            for(int i = 0; i < a; ++i) {
                if(i % 2 == 0) continue;
                    S1 = S1 + i;
            }

            for(int i = 0; i < a; ++i) {
                if(i % 2 != 0) continue;
                    S2 = S2 + i;
            }
             

            printf("Tổng các số tự nhiên không lớn hơn n S = %d\n", S);
            printf("Tổng các số tự nhiên lẻ không lớn hơn n S1 = %d\n", S1);
            printf("Tổng các số tự nhiên chẵn không lớn hơn n S2 = %d\n", S2);
        }
}

// Bài 8: Nhập vào 1 số nguyên n, yêu cầu xuất tất cả số nguyên tố từ 1 đến n (mỗi số cách 1 khoảng trắng), nếu không có số nào, xuất -1.
int main() {
    int a;
    puts("Nhập vào sô nguyên ");
    scanf("%d", &a);

    if(a < 0) 
        printf("Số nhập vào không hợp lệ");
    else {
        for(int i = 1; i <= a; i++) {
            int k = 0;
            for(int j = 1; j <= i; j++) {
                if(i % j == 0)
                    ++k;
            }
            if(k == 2) printf("%d\n", i);
        }
    }
}

// Bài 9: Nhập số nguyên dương n và tính tổng: S = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n

int main() {
    int n, sum = 0, volume = 1;
    puts("Nhập vào số nguyên dương: ");
    scanf("%d", &n);
    if(n < 0) 
        printf("Đây không phải số nguyên dương");
    else {
        for(int i = 1; i <= n; ++i) {
            volume = volume * i; // volume1 = 1 * 1 =1; volume2 = 1 * 2 =2; volume3 = 2 * 3 =6; volume4 = 4 * 6 =24; volume5 = 5 * 24 =120;volume6 = 6 * 120 =720
            
            sum = sum + volume; // sum1 = 0 + 1 = 1; sum2 = 1 + 2 = 3;sum3 = 3 + 6 = 9; sum4 = 9 + 24 =33; sum5 = 33 + 120 =153;sum6 = 153 + 720 = 873
            
        }
    
        printf("%d\n", sum);
    }
    
}
// Bài 10: Nhập số tự nhiên n rồi tính tổng các số tự nhiên không lớn hơn n và chia hết cho 7.

int main() {
    int n, sum = 0;
    puts("Nhập số tự nhiên: ");
    scanf("%d", &n);

    if(n < 0)
        printf("Số nhập vào không hợp lệ");
    else {
        for(int i=0; i<=n; i++) {
        if(i % 7 != 0) continue;
        sum += i;
        }
        printf("%d\n", sum);
    }
   
}

// Bài 11: Nhập số tự nhiên n rồi liệt kê các ước số của đó. Số đó bao nhiêu ước?

int main () {
    int n, bienDem = 0;
    puts("Nhập vào số tự nhiên: ");
    scanf("%d", &n);
    if(n < 0)
        printf("Số nhập vào không hợp lệ");
    else {
       for(int i = 1; i <= n; ++i) {
        if(n % i != 0) continue;
            ++bienDem;
            printf("biến %d là ước của %d\n", i, n);
         }
        printf("Số %d có %d ước\n", n, bienDem);
    }
    
}