import java.io.*;

public class BoubleSort{

    public static void main(String args[]){

        PrintWriter writer = new PrintWriter(System.out);

        int a[] = {4,5,8,7,9,2,4,3,1};

        bouble_sort(a, a.length);

       for (int num : a) writer.print(num+" "); 
       
        writer.close();


    }

    private static void bouble_sort(int[] a, int n) {

        for(int i = 0; i < n-1 ; i++){
        
            for(int j = 0; j < n-i-1; j++)

            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
            
    }
}