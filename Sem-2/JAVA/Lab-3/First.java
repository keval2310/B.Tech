import java.util.Scanner;
public class First {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks a : ");
        float a = sc.nextFloat();
        System.out.println("Enter marks b : ");
        float b = sc.nextFloat();
        System.out.println("Enter marks c : ");
        float c = sc.nextFloat();
        System.out.println("Enter marks d : ");
        float d = sc.nextFloat();
        System.out.println("Enter marks e : ");
        float e = sc.nextFloat();
        float f = (a+b+c+d+e)/(float)5.0;
        if(f<40){
            System.out.println("Fail");
        }
        else if(f>=40 && f<=49){
            System.out.println("Third division");
        }
        else if(f>=50 && f<=59){
            System.out.println("Second division");
        }
        else{
            System.out.println("First division");
        }
    }
}