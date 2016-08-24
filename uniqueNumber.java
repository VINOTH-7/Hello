import java.util.Scanner;
public class uniqueNumber {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int siz=input.nextInt();
		int count=0;
		int[] arr=new int[siz];
		for(int i=0;i<siz;i++)
			arr[i]=input.nextInt();
		for(int i=0;i<siz-1 && arr[i]!=0;i++){
			count=0;
			for(int j=i+1;j<siz;j++)
				if(arr[i]==arr[j]){
					count++;
					arr[j]=0;
				}
		if(count==0)
			System.out.println(arr[i]);
		}
	}

}
