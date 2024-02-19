import java.util.Scanner;
    public class Seventh {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            String a= sc.nextLine();
            for(int i=0;i<a.length();i++)
            {
                for(int j=0;j<=i;j++)
                {
                    System.out.print(a.charAt(j));
                }
                System.out.println();
        }
    }
}