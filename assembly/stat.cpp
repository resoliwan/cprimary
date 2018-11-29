
struct HI {
    int a1;
    int a2;
    HI() {};
    HI(int a, int b): a1(a), a2(b) {};
};

void hello() {
    HI arr[2];
    arr[1] = HI(3, 4);
}

