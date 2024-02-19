import java.util.Scanner;

public class Third {
    public static void main(String[] args) {
        System.out.println("Enter A for addition, B for Substraction, C for Multiplication, D for Division");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st No. : ");
        double a = sc.nextDouble();
        System.out.println("Enter 2nd No. : ");
        double b = sc.nextDouble();
        char ch = sc.next().charAt(0);
        switch(ch){
            case 'A' : {
            System.out.println(a+b);
            break;
            }
            case 'B' : {
                System.out.println(a-b);
                break;
            }
            case 'C' : {
                System.out.println(a*b);
                break;
            }
            case 'D' : {
                System.out.println(a/b);
                break;
            }
        }
    }
}
