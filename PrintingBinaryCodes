import java.util.Scanner;

public class PrintingBinaryCodes {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int bytes = input.nextInt();
		int nBits = bytes;
		int maxNumber = (int) Math.pow(2, bytes); 
		for (int i = 0; i < maxNumber; i++) {
		    String binary = Integer.toBinaryString(i);
		    while (binary.length() != nBits) {
		        binary = "0" + binary;
		    }
		    if(i != maxNumber-1)
		    	System.out.print(binary+",");
		    else
		    	System.out.println(binary);
		}
		input.close();
	}
}
