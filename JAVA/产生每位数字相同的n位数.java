
import java.util.*;

public class 产生每位数字相同的n位数 {

//提交时改成 public class Main
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		char[] num = s.toCharArray();
		int [] NUM = {1,2} ;
		int j=0;
		for(int i = 0; i<s.length();i++)
		{
			if(num[i]!=','&&num[i]!=' ')
			{
				//System.out.print(num[i]);
				NUM[j] = i;
				j++;
			}
		}
		for(int i=0;i<(int)num[NUM[1]]-48;i++)
			System.out.print(num[NUM[0]]);
		sc.close();
	}
}
