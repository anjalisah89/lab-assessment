import java.util.Scanner;

public class numberpyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=1; i<=n; i++){

            //spaces
                int spaces = n-i;
                for(int j=1; j<=spaces; j++){
                    System.out.print(" ");
                }

            //number

                for(int j=1; j<=i; j++){
                    System.out.print(i+" ");
                }

            System.out.println();
        }
       
    }
}