import java.util.Scanner;
public class Array {
    static void display(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    static int[][] transpose(int[][] arr) {
        int[][] transposed = new int[arr[0].length][arr.length];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                transposed[j][i] = arr[i][j];
            }
        }
        return transposed;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = 3, coloum = 4;
        int[][] arr = new int[row][coloum];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < coloum; j++) {
                System.out.print("Enter value for arr[" + i + "][" + j + "]: ");
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("The 2D array is:");
        display(arr);
        System.out.println("The transposed 2D array is:");
        display(transpose(arr));
    }
}