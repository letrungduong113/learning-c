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