package Question;

public class Factorial {
	public static void main(String[] args) {
		System.out.println(factorial(5));
		System.out.println(recurssion(5));

	}
	public static int factorial(int n) {
		if(n==0) {
			return 1;
		}
		int fact=1;
		for(int i=1;i<=n;i++) {
			fact=fact*i;
		}
		return fact;
	}
	public static int recurssion(int n) {
		if(n==0) {
			return 1;
		}
		return n*(recurssion(n-1));
	}

}
