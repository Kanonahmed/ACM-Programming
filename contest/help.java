import java.util.*;
import java.math.*;
public class help
{

	public static void main(String agr[])
	{
		Scanner in=new Scanner(System.in);
		int n,k;
		BigInteger ss;
		n=in.nextInt();
		k=in.nextInt();

		System.out.println(ss);

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