import java.util.Scanner;
public class magicIndex {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int siz=input.nextInt();
		if(siz<0)
			System.out.print("Error");
		int[] arr=new int[siz];
		for(int i=0;i<siz;i++)
			arr[i]=input.nextInt();
		for(int i=0;i<siz;i++)
			if(i==arr[i])
			System.out.print(i );
	}
}
