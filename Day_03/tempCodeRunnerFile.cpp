    int calculateSum() {
        int d;
        while (n != 0) {
            d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        return sum;
    }
};