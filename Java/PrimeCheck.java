import java.util.Scanner;

class PrimeCheck {

    // Non-static method to check prime
    void checkPrime(int number) {
        boolean isPrime = true;

        if (number <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= number / 2; i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            System.out.println(number + " is a Prime number");
        else
            System.out.println(number + " is NOT a Prime number");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        // Create object to call non-static method
        PrimeCheck obj = new PrimeCheck();
        obj.checkPrime(num);
    }
}
