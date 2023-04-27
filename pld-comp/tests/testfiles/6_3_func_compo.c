int mul(int a, int b) {
    return a*b;
}

int compo(int a, int b) {
    return a + mul(a, b);
}

int main() {
    int a = 3;
    int b = 4;
    int c = compo(a, b);
    return c;
}