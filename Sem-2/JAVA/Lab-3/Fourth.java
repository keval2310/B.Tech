import java.util.Scanner;
public class Fourth {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an number : ");
        int a = sc.nextInt();
        boolean istrue = true;
        for(int i=2;i<a;i++)
        {
            if(a%i==0){
                istrue = false;
                break;
            }
        }
        if(istrue){
            System.out.println("No. is prime");
        }
        else{
            System.out.println("No. is not prime");
        }
    }
}