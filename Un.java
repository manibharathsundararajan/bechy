import java.util.*;
public class Un {

    public static void main(String[] args)
    {
    Scanner s=new Scanner(System.in);
    int n=s.nextInt();
    int flag=0;
    int[] a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=s.nextInt();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
                flag=1;
        }
        if(flag==0)
    {
        System.out.println(a[i]);
    } flag=0;
    }
   
    
    
}
}
