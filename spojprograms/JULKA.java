/*
kamalsam
*/
import java.util.Scanner;
import java.math.BigInteger;
class julka
{
    public static void main(String args[])
    {
        int i;
        Scanner input=new Scanner(System.in);
        for(i=0;i<10;i++)
        {
            BigInteger val=new BigInteger("0");
            BigInteger val1=new BigInteger("0");
            BigInteger ans1=new BigInteger("0");
            BigInteger ans2=new BigInteger("0");
            BigInteger l=new BigInteger("0");
            val=input.nextBigInteger();
            val1=input.nextBigInteger();
            ans1=val.subtract(val1);
            ans1=ans1.divide(BigInteger.valueOf(2));
            ans2=val.subtract(ans1);
            System.out.println(ans2);
            System.out.println(ans1);
        }
    }
}