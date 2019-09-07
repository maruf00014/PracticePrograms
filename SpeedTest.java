import java.io.*;

 class SpeedTest{

    public static void main(String[] args) throws IOException{

        

        long startTime = System.currentTimeMillis();

        

        PrintWriter writer = new PrintWriter(System.out); // 34 s
        
        StringBuffer st = new StringBuffer();
        for(int i = 1; i<50000; i++) writer.print(i); 
       
        long endTime = System.currentTimeMillis();
        writer.print(("Time: "+(float)(endTime - startTime)/1000+" sec"));
       
        writer.flush();
        writer.close();
       
    }
}