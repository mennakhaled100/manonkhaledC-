//الكود الأصلي بيطبع العدد بالعكس  يعني كدة : 654321

// لو عكسنا السطرين يعني المود مع القسمه هيطبع بالترتيب عادي: 123456
#include <iostream>
using namespace std;

void do_something(int n) {
    if (n) {
        cout << n % 10;
        do_something(n / 10);
    }
}

int main() {
    do_something(123456);
    return 0;
}
