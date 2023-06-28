public class LeftTrianglePattern  
{    
public static void main(String args[])   
{      
int i, j, row = 6;       
  
for (i=0; i<row; i++)   
{  
//inner loop     
for (j=2*(row-i); j>=0; j--)         
{  
    
System.out.print(" ");   
}   
//inner loop for columns  
for (j=0; j<=i; j++ )   
{   
//prints star      
System.out.print("* ");   
}   

System.out.println();   
}   
}   
}  