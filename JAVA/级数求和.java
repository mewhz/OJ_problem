//题目链接:"https://www.luogu.org/problemnew/show/P1035"
package com.company;
import java.util.*;
public class Main {

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        double sum=0;
        int m=1;
        double n=s.nextDouble();
        while(true){
            if(n<sum)
                break;
            sum=1.0/m+sum;
            m++;
        }
        System.out.print(m-1);
    }
}
