/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class CodeChef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    int i;
		while(t-- > 0)
		{
		   int c = 0,pro = 0;
		   String s = sc.next(); 
		   int len = s.length();
		   Character[] a = new Character[len];
		   for(i = 0; i < len; i++)
		   		a[i] = s.charAt(i);//convert string to char array
		   
		   int p = 99 * 101 * 102 * 104;
		   for(i = 0; i < len-3; i++)
		   {
		   		pro = a[i]*a[i+1]*a[i+2]*a[i+3];
		   		if(pro == p)
		   			c++;
		   }
		   if(c !=0)
		   		System.out.println("lovely"+" "+c);
		   	else System.out.println("normal");
		   
		}
		
	}
}
