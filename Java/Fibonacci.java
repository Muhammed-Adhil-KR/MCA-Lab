import java.util.Scanner;

class Fibonacci {

    // Static method to find nth Fibonacci number
    static long fibonacci(int n) {
        if (n <= 1)
            return n;

        long a = 0, b = 1, c = 0;

        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        System.out.println("Fibonacci number at position " + n + " is: " + fibonacci(n));
    }
}
