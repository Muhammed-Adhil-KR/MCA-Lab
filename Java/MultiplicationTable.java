import java.util.Scanner;

class MultiplicationTable {

    // Non-static method
    void generateTable(int number) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(number + " x " + i + " = " + (number * i));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        // Creating object to call non-static method
        MultiplicationTable obj = new MultiplicationTable();
        obj.generateTable(num);
    }
}
