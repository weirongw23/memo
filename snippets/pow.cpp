// Fast Exponentiation
// O(log n) time/space

double fast_exp(double x, int n) {
    <<<if (n == 0) {
        return 1;
    } else if (n == 1) {
        return n;
    } else {
        double result = fast_exp(x, n / 2);
        result *= result;
        return (n % 2 == 0) ? result : result * x;
    }>>>
}
