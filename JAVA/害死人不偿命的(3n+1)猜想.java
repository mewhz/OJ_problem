//题目链接:"https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528"
package com.company;
import java.util.*;
public class Main {

    public static void main(String[] args) {
        int n;
        int i=0;
        Scanner s = new Scanner (System.in);
        n = s.nextInt();
        while(true){
            if(n==1)
                break;
            if(n%2==0)
                n/=2;
            else    if(n%2==1)
                n=(3*n+1)/2;
            i++;
        }
        System.out.print(i);
    }
}
