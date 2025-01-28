package JAVA;

public class HINHTHOI {
	public static void main(String[] args) {		
		int f=9;
		int number=f/2+1;
		String record="";
		String shape="";
		String main="";
		String space="";
		for (int i=1;i<=number;i++) {
			space=" ".repeat(number-i);
			main="*".repeat(2*i-1);
			record=space+main+space;
			shape+=record+"\n";
		}
		String space2="";
		String main2="";
		String record2="";
		String shape2="";
		int number2=f/2;
		for (int j=number2;j>=1;j--) {
			space2=" ".repeat(number-j);
			main2="*".repeat(2*j-1);
			record2=space2+main2+space2;
			shape+=record2+"\n";
		}
		System.out.println(shape);
	}
}
