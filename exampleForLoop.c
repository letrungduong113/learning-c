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

// Nhập 1 số nguyên n, xuất tổng các số lẻ từ 1 đến n

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

// Nhập vào số nguyên n, kiểm tra xem phải là số nguyên tố hay không


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