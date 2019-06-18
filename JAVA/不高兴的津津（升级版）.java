//题目链接:"https://www.luogu.org/problemnew/show/P1534"
import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner s = new Scanner  (System.in);
        int n = s.nextInt();
        int sum=0,SUM=0;
        for(int i=0;i<n;i++){
            int a = s.nextInt(),b = s.nextInt();
            sum=sum+a+b-8;
            SUM+=sum;
        }
        System.out.print(SUM);
    }
}
