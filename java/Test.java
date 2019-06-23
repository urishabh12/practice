import java.io.*;
import java.util.*;

class Test {
    public static void main(String[] args) throws InterruptedException {
        List<String> inputByLine = new ArrayList<String>();
        try {
            // Get the object of DataInputStream
            InputStreamReader isr = new InputStreamReader(System.in, "UTF-8");
            BufferedReader br = new BufferedReader(isr);
            String line = "";
            while ((line = br.readLine()) != null) {
                inputByLine.add(line.toString());
            }
            for (String line2 : inputByLine)
                System.out.println(line2);
            isr.close();
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }

        int s = inputByLine.size();
        int count = 0;
        System.out.println("Hello World");
        for (int i = 0; i < s; i++) {
            if (inputByLine.get(i) == " ") {
                count = count + 1;
            }
        }
        System.out.println(count);
    }
}