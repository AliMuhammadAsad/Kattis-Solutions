import java.util.Scanner;

public class inversefactorial{
    public static final int mod = 1000000009;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String nfact = sc.next();
        long val = 0;
        for(char c: nfact.toCharArray()){
            val = (val * 10 + (c - '0')) % mod;
        }
        long f = 1; int i = 1;
        while(true){
            f =  (f * i) % mod;
            if(f == val){
                System.out.println(i); break;
            }
            i++;
        }
        sc.close();
    }
}