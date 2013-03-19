/*
kamalsam
*/
import java.util.Scanner;
import java.math.BigInteger;
class fact
{
    public static void main(String args[])
    {
        long n,t,i,j;
        Scanner input=new Scanner(System.in);
        t=input.nextInt();
        for(i=0;i<t;i++)
        {
            BigInteger ans1=BigInteger.valueOf(1);
            n=input.nextInt();
            for(j=1;j<=n;j++)
            {
              ans1=ans1.multiply(BigInteger.valueOf(j));
            }
            System.out.println(ans1);
        }
    }
}