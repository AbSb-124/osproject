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
   System.out.println("Enter Number Of Students");
   n=in.nextInt();
   for(i=0;i<n;i++)
   {
   	Scanner sc=new Scanner(System.in);
    System.out.println("Enter Student" + (i+1) + " Name:");
    p[i]=sc.nextLine();
    System.out.println("Enter Process Time:");
    pt[i]=in.nextInt();
    System.out.println("Enter Number Of Gifts:");
    pr[i]=in.nextInt();
   }
