import java.util.*;

class Main {
    public static List<Integer> findFlowerIndexes(int n, int t, List<Integer> arr) {
        // User will implement the logic here
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr.get(i) + arr.get(j) == t) {
                    ans.add(i);
                    ans.add(j);
                    return ans;
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = sc.nextInt();
        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }
        List<Integer> result = findFlowerIndexes(n, t, arr);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}