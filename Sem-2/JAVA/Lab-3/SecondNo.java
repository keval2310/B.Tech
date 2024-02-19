import java.util.Scanner;
public class SecondNo {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an number : ");
        int n = sc.nextInt();
        int f=0;
        int x=n;
        int last;
        while(n>0){
            last = n%10;
            f = f*10+last;
            n = n/10;
        }
        if(f==x){
            System.out.println("No is palindrome");
        }
        else{
            System.out.println("No is not palindrome");
        }
    }
}