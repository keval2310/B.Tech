import java.util.*;
    public class SecondString {
        public static void main(String[] args) {
            System.out.println("Enter an string : ");
            Scanner sc = new Scanner(System.in);
            String st = sc.next();
            String newst="";
            for(int i=st.length()-1;i>=0;i--){
                newst = newst + st.charAt(i);
            }
            if(newst.equals(st))
            {
                System.out.println("palindrone");
            }
            else{
            System.out.println(" not palindrone");
        }
    }
}