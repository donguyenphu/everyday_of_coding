
public class HINHTHOI {
	public static void main(String[] args) {
/*		int number=9;
		String record="";
		String shape="";
		String main="";
		String space="";
		for (int i=1;i<=number;i+=2) {
			space=" ".repeat(number-i);
			main="* ".repeat(i);
			record=space+main+space;
			shape+=record+"\n";
		}
		System.out.println(shape);
		System.out.println("--------------------------------------------------");
		String space2="";
		String main2="";
		String record2="";
		String shape2="";
		int second=number-1; 
		for (int i=1;i<=second;i+=2) {
			space2=" ".repeat(i);
			main2=" *".repeat(second-i);
			record2=space2+main2+space2;
			shape2+=record2+"\n";
		}
		System.out.println(shape2);       */
		
		
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
