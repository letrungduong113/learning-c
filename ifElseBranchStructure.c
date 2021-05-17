// Cấu trúc rẽ nhánh if-else
#include <stdio.h>
// Cấu trúc chung của if:

if(dieu_kien) { // nếu điều kiện thỏa mãn
    // làm cái gì đó ...
} // end if

// Cấu trúc chung của if-else

if(dieu_kien) { // nếu điều kiện thỏa mãn
    // làm cái gì đó ...
} // end if
else { // ngược lại
    // làm 1 cái gì đó ...
} // end else

// --------- EXAMPLE ------------------------


int main() {
    int money = 1000;
    if(money >= 1000) {
        printf("A la trieu phu");
    }
    return 0;
}