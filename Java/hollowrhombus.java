import java.util.Scanner;

public class hollowrhombus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=1; i<=n; i++){

                int spaces = n-i;
                for(int j=1; j<=spaces; j++){
                    System.out.print(" ");
                }

                for(int j=1; j<=n; j++){
                
                    if( i==1 || j==1 || i==n || j==n){
                      System.out.print("*"); 
                    }
                    else{
                      System.out.print(" ");
                    }
                }

            System.out.println();
        }
       
    }
}