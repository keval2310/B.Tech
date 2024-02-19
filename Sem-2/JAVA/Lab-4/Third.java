import java.util.Scanner;
    public class Third {
            public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int arr[] = new int[4];
            int sum=0;
            for(int i=0;i<4;i++)
            {
                System.out.println("eneter an value : ");
                arr[i] = sc.nextInt();
                sum=sum+arr[i];
            }
            int avg = sum/4;
            System.out.println(avg);
        }
    }