// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (b != 0) {
       int c = a % b;
       a = b;
       b = c;
    }
    return a;
}
