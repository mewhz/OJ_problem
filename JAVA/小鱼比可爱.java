//题目链接:"https://www.luogu.org/problemnew/show/P1428"
import java.util.*;
public class 小鱼比可爱 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] a = new int[105];
        int[] b = new int[105];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
            for(int j=0;j<i;j++){
                if(a[j]<a[i])
                    b[i]++;
            }
        }
        for(int i=0;i<n;i++)
            System.out.printf("%d ", b[i]);
    }
}
