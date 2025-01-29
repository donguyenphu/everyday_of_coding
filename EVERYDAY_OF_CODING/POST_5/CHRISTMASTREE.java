package JAVA;

public class CHRISTMASTREE {
	public static void main(String[] args) {
		
	int length=7;
	String shape="";
	for (int i=1;i<=length;i++) {
		String space=" ".repeat(length-i);
		String rec="";
		for (int j=1;j<=i;j++) {
			if (i%2==0) {
				rec+=i+""+"x";
			}
			else {
				rec+=i+""+"o";
			}
		}
		shape+=space+rec.substring(0,rec.length()-1)+space+"\n";
	}
	int distance=(2*length)/3;
	int length2=2*length-1;
	shape+=( (" ".repeat(distance)) +"|"+ (" ".repeat(length2-2*distance-2) +"|"+ (" ".repeat(distance))+"\n" )).repeat(length/2);
	shape+=("-").repeat(length*2-1);
	System.out.println(shape);
		
	}
}
