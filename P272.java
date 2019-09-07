import java.io.*;

class P272{

    public static void main(String args[]){

        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        String  s ="";
        try{
        while((s= reader.readLine()) != null) writer.write(s);
        } catch (Exception e){}

        writer.close();
    }


}