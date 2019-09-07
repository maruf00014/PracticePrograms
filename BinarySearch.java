import java.io.*;

public class BinarySearch {

   

public static void main(String args[]) throws IOException{

    PrintWriter writer = new PrintWriter(System.out);

    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    int a[] = {1,2,3,4,5,6,7,8};

    int x = Integer.parseInt(reader.readLine());

    int result = binary_search(a,a.length,x);

    writer.print(result);
    writer.close();

    


}

public static int binary_search(int a[], int n, int x) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (right + left) / 2;

        if (a[mid] == x)
            return mid;

        else if (a[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;

    }

    return -1;

}

   
}