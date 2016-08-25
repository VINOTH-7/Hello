import java.util.Scanner;

public class rightRotationInArray {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		if(n>0){
		int k=input.nextInt();
		for(int i=k+2;i<=n;i++)
			System.out.print(i+" ");
		for(int i=1;i<k+2;i++)
			System.out.print(i+" ");
		}
		else
			System.out.println("Error");
	}
}
