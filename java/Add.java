// Self-checking program: exits non-zero on failure (for the Java / run-command
// grader). Run with: javac Add.java && java Add
public class Add {
  static int add(int a, int b) {
    return a + b;
  }

  public static void main(String[] args) {
    if (add(2, 3) != 5 || add(-4, 2) != -2 || add(0, 7) != 7) {
      System.err.println("FAIL");
      System.exit(1);
    }
    System.out.println("All Java tests passed");
  }
}
