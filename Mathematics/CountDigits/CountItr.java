import java.util.Scanner;

class CountItr {

    static int count(int n) {
        int count = 0;

        while (n != 0) {
            n = n / 10;
            count++;
        }

        return count;
    }

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Enter No: ");
        n = scanner.nextInt();

        System.out.println(CountItr.count(n));

        scanner.close();

    }

}