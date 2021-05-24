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

// Viết chương trình sử dụng vòng lặp while để chương trình in ra như sau:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main() {
    int a = 1;
    printf("%d\n", a);
    while(a <= 2) {
         printf("%d ", a);
         ++a;
    }
     printf("\n");
    a = 1;
    while(a <= 3) {
         printf("%d ", a);
         ++a;
    }
      printf("\n");
    a = 1;
    while(a <= 4) {
         printf("%d ", a);
         ++a;
    }
    a = 1;
    printf("\n");
    while(a <= 5) {
            
         printf("%d ", a);
         ++a;
    }
     printf("\n");
}
