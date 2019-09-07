import java.io.*;

public class ReverseArray{

    public static void main(String[] args) {
    
        PrintWriter writer = new PrintWriter(System.out);

        int a[] = {1,2,3,4,5,6,7,8,9,10,11};

        reverse(a, a.length);

        for (int item : a) writer.print(item+" ");

        writer.close();
        
    }

    private static void reverse(int[] a, int n) {

        for(int i = 0; i < n/2 ; i++ ){

           int temp = a[i];
           a[i] = a[n-i-1];
           a[n-i-1] = temp;

        }
    }
}