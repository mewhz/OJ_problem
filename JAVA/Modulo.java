//题目链接:"https://www.luogu.org/problemnew/show/P4325"
import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int[] a = new int[10];
        int[] b = new int[42];
        for(int i=0;i<10;i++)
        {
            a[i] = s.nextInt();
            b[a[i]%42]++;
        }
        int sum=0;
        for(int i=0;i<42;i++){
            if(b[i]!=0){
                sum++;
            }
        }
        System.out.print(sum);
    }
}
