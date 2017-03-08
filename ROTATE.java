import java.util.Scanner;

public class ROTATE {
    public static void main(String[] args) {
        int i,max=0,count=0;
        int[] arr=new int[10];
        Scanner input=new Scanner(System.in);
        for(i=0;i<10;i++)
              arr[i]=input.nextInt();
        for(i=0;i<10;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        System.out.println("max num in array is:"+max);
        for(i=0;i<10;i++)
        {
            if(arr[i]==max)
        count++;
                }
        System.out.println("count is:"+count);
        input.close();
    }
    }
