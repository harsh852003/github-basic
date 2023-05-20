class try_catch {
    public static void main(String[] args) {
  
      try {
        int divideByZero = 10 / 0;
        System.out.println("Rest of code in try block");
      }
  
      catch (ArithmeticException e) {
        System.out.println("ArithmeticException => " + e.getMessage());
      }
    }
    System.out.println("statement 1");
  }
