package samples;

public class UseStatic {
	// there will be times when you will want to define a class member that will be
	// used independently of any object of that class. To create such a member, procede its
	// declaration with the keyword static. Instance variables declared as static are, essentially,
	// global variables. When objects o its class are declared, no copy of static variable is made.
	// Instead, all instances of the class share the same static variable. 
	static int a = 3;
	static int b;
	
	static void meth(int x) {
		System.out.println("x = " + x);
		System.out.println("a = " + a);
		System.out.println("b = " + b);
	}
	
	static {
		System.out.println("Static block initialized.");
		b = a * 4;
	}
	
	public static void main(String[] str) {
		meth(42);
	}
	
	// output must be:
	//Static block initialized.
	// x = 42
	// a = 3
	// b = 12
}
