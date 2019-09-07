import java.io.*;
import java.util.Arrays;

public class DoublicateValue{

    public static void main(String[] args) {
         
        PrintWriter writer = new PrintWriter(System.out);

        int a[] = {1,2,3,3,4,4};

        Arrays.sort(a);

        int length = a.length;  
        length = removeDuplicateElements(a, length); 
      
        for (int i= 0; i<6; i++) {
           
            writer.print(a[i] +" ");
            
        }

        writer.close();
    }

    public static int removeDuplicateElements(int arr[], int n){  
        if (n==0 || n==1){  
            return n;  
        }    
        int j = 0;
        for (int i=0; i < n-1; i++){  
            if (arr[i] != arr[i+1]){  
                arr[j++] = arr[i];  
            }  
        }  
        arr[j++] = arr[n-1];  
        return j;  
    }  

}