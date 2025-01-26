package ZVN;

import java.util.Scanner;

public class THAPHINH {
	public static void main(String[] args) {
		String plus="";
		String equal="";
		String record="";
		String shape="";
		String number="";
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		sc.close();
		/*output;
		 * +1=
		 * 222
		 * +3= */
		for (int i=1;i<=n/2;i++) {
			plus="+".repeat((n-(2*i-1))/2);
			number=(i+"").repeat(2*i-1);
			equal="=".repeat((n-(2*i-1))/2);
			record=plus+number+equal;
			shape+=record+"\n";
		}
		shape+=((n/2+1)+"").repeat(n)+"\n";
		plus="";
		equal="";
		record="";
		number="";
		String shape2="";
		for (int i=1;i<=n/2;i++) {
			plus="+".repeat(i);
			number=(i+n/2+1+"").repeat(n-2*i);  
			equal="=".repeat(i);
			record=plus+number+equal;
			shape+=record+"\n";
		}
		System.out.println(shape+shape2);	
	}
}
