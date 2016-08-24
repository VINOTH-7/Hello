import java.util.Scanner;

public class findingRepeatedNumbers {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int siz=input.nextInt();
		if(siz<0)
			System.out.print("Error");
		int[] count=new int[siz];
		int[] arr=new int[siz];
		for(int i=0;i<siz;i++)
			arr[i]=input.nextInt();
		for(int i=0;i<siz-1;i++)
			for(int j=i+1;j<siz;j++)
				if(arr[i]==arr[j])
					count[i]++;
		for(int i=0;i<siz;i++)
			if(count[i]>0)
				System.out.print(arr[i]+" ");
	}
}
