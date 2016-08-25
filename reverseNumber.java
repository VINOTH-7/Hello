import java.util.Scanner;
public class reverseNumber {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		String n=input.next();
		if(n=='0')
	 	  System.out.println("Error");
	 	  else
	 	  {
		  StringBuffer sb=new StringBuffer(n);
		  sb.reverse();
		  System.out.println(sb);
		  }
	}
}
