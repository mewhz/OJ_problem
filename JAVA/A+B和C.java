//ÌâÄ¿Á´½Ó"https://www.nowcoder.com/pat/6/problem/4077"
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		long [] a = new long[100];
		long [] b = new long[100];
		long [] c = new long[100];
		int n;
		n = s.nextInt();
		for(int i=0;i<n;i++)
		{
			a[i]=s.nextLong();
			b[i]=s.nextLong();
			c[i]=s.nextLong();
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]+b[i]>c[i])
				System.out.printf("Case #%d: true\n",i+1);
			else
				System.out.printf("Case #%d: false\n",i+1);
		}
	}
}
