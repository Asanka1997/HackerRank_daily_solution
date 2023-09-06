import java.util.*; 

class Solution{ 
    public static void main(String []argh){ 
        Scanner input = new Scanner(System.in); 
        int t=input.nextInt(); 
        
        for(int i=0;i<t;i++){
            int a = input.nextInt();
            int b = input.nextInt();
            int n = input.nextInt();

            for (int j = 0; j < n; j++ ) {
                System.out.print((a+b) + " ");
                a = a+b;
                b = b*2;
            }
        System.out.println();
        }

        input.close();
    }
}