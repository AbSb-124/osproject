import java.util.Scanner;
import java.io.*;
import java.lang.*;
class osproject
{
  public static void main(String args[])
  {
   String[] p = new String[10];
   String temp;
   int i;
   int j;
   int [] pt = new int [10];
   int [] pr=new int [10];
   int temp1;
   int n;
   Scanner in = new Scanner(System.in);
   System.out.println("Enter no of girls");
   n=in.nextInt();
   for(i=0;i<n;i++)
   {
   	Scanner sc=new Scanner(System.in);
    System.out.println("Enter girl " + (i+1) + " name:");
    p[i]=sc.nextLine();
    System.out.println("Enter process time:");
    pt[i]=in.nextInt();
    System.out.println("Enter no of gifts:");
    pr[i]=in.nextInt();
   }
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
      if(pr[i]<pr[j])
    {
      temp1=pr[i];
      pr[i]=pr[j];
      pr[j]=temp1;
      temp1=pt[i];
      pt[i]=pt[j];
      pt[j]=temp1;
      
      temp = p[i];
      p[i] = p[j];
      p[j] = temp;
 }
 }
