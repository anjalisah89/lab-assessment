public class whilegauri {
    public static void main(String[] args) {
        int i=0, j=123;
        while(j>0){
            //System.out.print(i);
            {
                i=i+1; //i++
                j=j/10;
            }
            System.out.println("number of digits:" + i);
           
        }
    }
}