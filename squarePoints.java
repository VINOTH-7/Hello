import java.util.Scanner;
public class squarePoints {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int[][] pt=new int[4][2];
		for(int i=0;i<4;i++)
			for(int j=0;j<2;j++)
				pt[i][j]=input.nextInt();
		for(int i=0;i<4;i++)
			for(int j=i+1;j<2;j++)
				{
				if(i!=3)
				{
					if(pt[i][1]==pt[j][0])
						continue;
					else {
						System.out.println("Square cannot be formed");
						System.exit(0);
					}
				}
			else
			{
				if(pt[i][1]==pt[0][0])
					continue;
				else{
					System.out.println("Square cannot be formed");
					System.exit(0);
				}
			}
		}
		System.out.println("Square");
	}
}
