import java.util.Scanner;
public class firstRepeatingNumber {
	public static void main(String[] args) {
			Scanner input=new Scanner(System.in);
			int siz=input.nextInt();
			if(siz>0){
			int count=0;
			int[] arr=new int[siz];
			for(int i=0;i<siz;i++)
				arr[i]=input.nextInt();
			for(int i=0;i<siz-1;i++)
				for(int j=i+1;j<siz;j++)
					if(arr[i]==arr[j])
					{
						System.out.println(arr[i]);
						System.exit(0);
					}}
					else
					System.out.println("Error");
	}

}
