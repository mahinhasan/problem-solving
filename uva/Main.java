import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args)  {
		Scanner sc = new Scanner(System.in);
		
		//BigInteger fac =  BigInteger.ONE;
		while(sc.hasNext()){
			int n = sc.nextInt();
			BigInteger fac =  BigInteger.ONE;
			for(int i = 1; i<=n;i++)
			fac = fac.multiply(BigInteger.valueOf(i));
			System.out.printf("%d!\n" ,n);
			
			System.out.println(fac.toString());
		}
		
	}
}

