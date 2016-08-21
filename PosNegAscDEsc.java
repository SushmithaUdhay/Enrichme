/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int range  = sc.nextInt();
		int[] arr = new int[range];
		int[] res = new int[range];
		for(int i=0;i<range;i++){
			arr[i] = sc.nextInt();
		}
		Arrays.sort(arr);
		
		res = posNegAscDes(arr);
		for(int i=0;i<range;i++){
			System.out.println(res[i]);
		}
	}
	public static int[] posNegAscDes(int[] array){
		
		int[] result = new int[array.length];
		int k=0,j,pos=0;
		
		for(int i=0;i<array.length && k<array.length;i++){
			if(array[i] >= 0){
				result[k] = array[i];
				k+=2;
			}
			if(array[i]<0){
				pos = i;
				
			}
		}

		for(j=pos,k=1;j>=0;j--,k+=2){
		    
			result[k] = array[j];
		}
		
	
		return result;
	}
	
}


/*
input
10,0,9,-9,8,-8,-7,-6,4,3,-1
output
0,-1,3,-6,4,-7,8,-8,9,-9

*/
