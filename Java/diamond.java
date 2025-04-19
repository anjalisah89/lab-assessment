import java.util.Scanner;

public class diamond {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        //upper half

        for(int i=1; i<=n; i++){

            //spaces
                int spaces = n-i;
                for(int j=1; j<=spaces; j++){
                    System.out.print(" ");
                }

            //1st half stars

                for(int j=1; j<=2*i-1; j++){
                    System.out.print("*");
                }

            System.out.println();
        }

        //lower half 

        for(int i=n; i>=1; i--){

            //spaces
                int spaces = n-i;
                for(int j=1; j<=spaces; j++){
                    System.out.print(" ");
                }

            //1st half stars

                for(int j=1; j<=2*i-1; j++){
                    System.out.print("*");
                }

            System.out.println();
        }
    }
}