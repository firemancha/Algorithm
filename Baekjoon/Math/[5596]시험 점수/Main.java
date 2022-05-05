import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

  public static int sum1, sum2;

  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    sum1 = sum2 = 0;

    StringTokenizer st = new StringTokenizer(br.readLine());
    for(int i = 0; i < 4; i++){
      sum1 += Integer.parseInt(st.nextToken());
    }

    st = new StringTokenizer(br.readLine());
    for(int i = 0; i < 4; i++){
      sum2 += Integer.parseInt(st.nextToken());
    }

    bw.write((sum1 < sum2 ? sum2 : sum1) + "\n");

    bw.flush();
    bw.close();
    br.close();
  }
}