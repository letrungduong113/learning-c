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