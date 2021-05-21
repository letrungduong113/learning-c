// Bài tập vận dụng vòng lặp while
// In ra tất cả số chia hết cho 2 từ 1 đến 100

int main() {
    int i = 1;
    while(i <= 100) {
        ++i;
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}