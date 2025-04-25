import java.util.*;

public class solution{
   public static void main(String[] args) { 
     int[] arr ={1,89, 43, 23, 12 ,3,4};
     Arrays.sort(arr);
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i] +" ");
        }

    Vector<Integer> nums = new Vector<>();
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
        int a = sc.nextInt();
        nums.add(a);
    }

    Collections.sort(nums);
    int i=0;
        while(nums.size() > i){
            System.out.print(nums.get(i)+ " ");
            i++;
        }
   }

}