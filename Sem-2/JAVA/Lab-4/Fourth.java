import java.util.Scanner;
public class Fourth {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[]= new int[4];
        System.out.println("enter an value of n : ");
        int n= sc.nextInt();
        for(int i=0;i<n;i++){
            System.out.println("enter a value : ");
            arr[i] = sc.nextInt();
        }
        for(int i=n-1;i>=0;i--){
            System.out.println(arr[i]);
        }
    }
}