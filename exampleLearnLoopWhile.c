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
// Viết chương trình in ra tất cả ký tự thuộc bảng mã ASCII từ 0 đến 255.
int main() {
        unsigned char count;
        count = 32;
        while(32 <= count && count < 255) {
            printf("%d - %c\n", count, count);
            ++count;
        }
}
