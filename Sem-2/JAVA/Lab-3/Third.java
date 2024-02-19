import java.util.*;
public class Third {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter an val of a:");
        int a = sc.nextInt();

        System.out.println("Enter an val of b:");
        int b = sc.nextInt();

        System.out.println("Enter an val of c:");
        int c = sc.nextInt();

        if(a>b){

            if(a>c){
                System.out.println("max:a");
            }
            else{
                System.out.println("max:c");
            }
        }
        else{
             if(a>c){
                System.out.println("max:b");
            }
            else{
                System.out.println("max:c");
            }
        }
    }
}