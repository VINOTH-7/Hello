import java.util.Scanner;
public class noOfPrime {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		if(n>0){
		int count=0;
		for(int i=2;i<=n;i++){
			int c=0;
			for(int j=2;j<=n;j++)
				if(i%j==0)
					c++;
			if(c==1)
				count++;
		}
		System.out.println(count);
		}
		else
		  System.out.println("Error");
	}
}
