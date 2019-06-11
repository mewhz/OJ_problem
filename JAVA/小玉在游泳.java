//题目链接:"https://www.luogu.org/problemnew/show/P1423"
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner s =new Scanner(System.in);
        float a=s.nextFloat();
        float b=2f;
        int i=1;
        float sum=0;
        while(true){
            sum+=b;
            if(sum>=a)
                break;
            i++;
            b*=0.98;
        }
        System.out.print(i);
    }
}