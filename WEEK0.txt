import java.util.Scanner;

public class ques {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the number to be compared: ");
        int m = sc.nextInt();
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == m) {
                c++;
                break;
            }
            c++;
        }
        System.out.println("number of comparision is: " + c);
    }
}