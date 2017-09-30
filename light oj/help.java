import java.util.*;
import java.math.*;
public class Main
{

	public static void main(String agr[])
	{
		Scanner in=new Scanner(System.in);
		int tc,t;
		tc=in.nextInt();
		t=1;
		while(tc!=0)
		{
		BigInteger ss,h;
		int n,k;
		n=in.nextInt();
		k=in.nextInt();
         ss=factorial(n);
        // System.out.println(ss);
         h=ss.mod(BigInteger.valueOf(k));
		System.out.println("Case "+t+": "+h);
		tc--;
		t++;
	    }

	}
	public static BigInteger factorial(int p)
	{
	     BigInteger fact;
		fact=BigInteger.valueOf(1);
		for(int i=1;i<=p;i++)
		fact=fact.multiply(BigInteger.valueOf(i));
		return fact;

	}
}