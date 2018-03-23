import java.util.Scanner;
public class Palindrome {
    public static void main(String []s)
    {
        System.out.println("enter the number:");
        Scanner r=new Scanner(System.in);
        int num=r.nextInt();
        int n =num;
        int  rev=0;
        while(num>0)
        {
            rev=rev*10;
            rev=rev+num%10;
            num=num/10;
        }
        if(rev==n){
            
            System.out.println(n+ "yes");
        
        }
        else
        {
            System.out.println(n+ "no");
        }
   
        
    }
}
