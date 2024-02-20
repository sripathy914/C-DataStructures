/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
class REV
{
    void rever(int b)
    {
        int rem=0,res=0;
        while(b!=0)
        {
            rem=b%10;
            res=rem+res*10;
            b=b/10;
        }
        System.out.println(res);
    }
}
public class Main
{
	public static void main(String[] args) {
		int num;
		Scanner sc=new Scanner(System.in);
		num=sc.nextInt();
		REV a=new REV();
		a.rever(num);
	}
}
