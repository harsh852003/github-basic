public class Main {

  
    public int addNumbers(int a, int b, int c) {
      int sum = a + b + c;
      return sum;
    }
  
    public static void main(String[] args) {
      
      int num1 = 35;
      int num2 = 36;
      int num3 = 38;
 
      Main obj = new Main();
      int result = obj.addNumbers(num1, num2, num3);
      System.out.println("Sum is: " + result);
    }
  } 
