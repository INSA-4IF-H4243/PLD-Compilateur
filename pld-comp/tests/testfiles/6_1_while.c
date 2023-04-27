int main() {
    int a = 7;
    int s = 0;
    while (a < 7) {
        if (a < 5) {
            a = a + 1;
        }
        else {
            a = a + 2;
        }
        s = s + a;
    }
    
    return s;
}