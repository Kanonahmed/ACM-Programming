import java.util.*;
import java.math.*;
public class kanon
{
	public static void main(String agr[])
	{

		Scanner in=new Scanner(System.in);
		BigInteger a,b;
		int tc,t;
		tc=in.nextInt();
		t=1;
		while(tc){
		a=in.nextBigInteger();
		b=in.nextBigInteger();
		if(a%b==BigInteger.valueOf(0))
		System.out.println("Case +t: divisible");
		else
		System.out.println("Case +t: not divisible");
       tc--;
		t++;
	}

	}



}