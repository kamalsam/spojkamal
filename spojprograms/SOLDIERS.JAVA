/*
kamalsam
*/
import java.math.BigInteger;
import java.util.Scanner;
class soldier
{
  public static void main(String args[])
  {
   Scanner input=new Scanner(System.in);
   int t,i;
   t=input.nextInt();
   for(i=0;i<t;i++)
   {
     BigInteger v1,v2,ans,ans1,modulo,modulo1,answer,answer1;
     v1=input.nextBigInteger();
     v2=input.nextBigInteger();
     ans=v1.divide(BigInteger.valueOf(2));
     modulo=v1.mod(BigInteger.valueOf(2));
   if(modulo.compareTo(BigInteger.valueOf(1))==0)
      ans=ans.add(BigInteger.valueOf(1));
     ans1=v2.multiply(ans);
    answer=v2.divide(BigInteger.valueOf(2));
     modulo1=v2.mod(BigInteger.valueOf(2));
   if(modulo1.compareTo(BigInteger.valueOf(1))==0)
      answer=answer.add(BigInteger.valueOf(1));
     answer1=v1.multiply(answer);
     if(ans1.compareTo(answer1)>0)
      System.out.println(ans1);
     else
      System.out.println(answer1);
   }
  }
}