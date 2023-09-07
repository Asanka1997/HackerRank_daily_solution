import java.util.Scanner;

public class Main {
        public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(hasNoPrimeFactorLargerThan5((n)));
        input.close();
    }

    public static boolean hasNoPrimeFactorLargerThan5(int num) {
        while (num % 2 == 0) {
            num /= 2;
        }
        while (num % 3 == 0) {
            num /= 3;
        }
        while (num % 5 == 0) {
            num /= 5;
        }

        // If num becomes 1, it means there are no prime factors larger than 5
        return num == 1;
    }
}
