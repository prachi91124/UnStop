import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Main {
    public static String fn(List<String> lt, int k, int n){
        HashMap<String, Integer> map = new HashMap<>();
        List<String> order = new ArrayList<>();
        List<String> result = new ArrayList<>();

        for(String c: lt){
            map.put(c,map.getOrDefault(c,0)+1);
            if(map.get(c) == 1){
                order.add(c);
            }
        }

        for(String c: order){
            if(map.get(c)==1){
                result.add(c);
            }
        }

        if(result.size()< k){
            return "-1";
        }else{
            return result.get(k-1);
        }
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        
        List <String> lt = new ArrayList<>(); 
        for(int i = 0; i < n; i++){
            String data = sc.nextLine();
            lt.add(data);
        }

        int k = sc.nextInt();

        System.out.println(fn(lt,k,n));
    }
}