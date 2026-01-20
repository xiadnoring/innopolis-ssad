#include <iostream>

using namespace std;

static void swap_by_ptr (int *a, int *b) {
    std::swap(*a, *b);
}

static void swap_by_ref (int &a, int &b) {
    std::swap(a, b);
}

int main() {
    int a = 1;
    int b = 2;
    printf("a=%d b=%d\n", a, b);
    swap_by_ptr(&a,&b);
    printf("after swap_by_ptr -> a=%d b=%d\n", a, b);
    printf("a=%d b=%d\n", a, b);
    swap_by_ref(a,b);
    printf("after swap_by_ref -> a=%d b=%d\n", a, b);
    return 0;
}
