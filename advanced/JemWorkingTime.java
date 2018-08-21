import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
public class JemWorkingTime {
    static BigInteger TWO = BigInteger.ONE.add(BigInteger.ONE);
    static public BigInteger evenOddCheck(BigInteger N){
        if(N.remainder(TWO)==BigInteger.ZERO){
          return N.divide(TWO);  
        }else
           return N.add(BigInteger.ONE).divide(TWO);
    }
    static public boolean isEven(BigInteger N){
        if(N.remainder(TWO)==BigInteger.ZERO){
          return true;  
        }else
           return false;
    }
    public static void jemsWorkingTime(BigInteger N,BigInteger B,BigInteger M){
        BigInteger temp_break = BigInteger.ZERO,required_time = BigInteger.ZERO,twiced_time = M; 
        while(N!=BigInteger.ZERO){
              temp_break = temp_break.add(B); 
              required_time=required_time.add(twiced_time.multiply(evenOddCheck(N)));
              twiced_time=twiced_time.multiply(TWO);
              if(isEven(N)){
                  N = evenOddCheck(N);
              }else{
                   N = evenOddCheck(N).subtract(BigInteger.ONE);
              }   
        }
        required_time = required_time.add(temp_break.subtract(BigInteger.ONE));
        System.out.println(required_time);
    }
    
    public static void main(String[] args)throws Exception{
        int test_cases;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        test_cases = Integer.parseInt(br.readLine().trim());
        String[] string = new String[test_cases];
        for(int i=0;i<test_cases;i++){
            string[i]= br.readLine().trim();
        }
        //N B M
        String[] s_arr = new String[3];
        BigInteger N,B,M;
        for(int i=0;i<test_cases;i++){
           s_arr = string[i].split(" ");
           N = new BigInteger(s_arr[0].trim());
           B = new BigInteger(s_arr[1].trim());
           M = new BigInteger(s_arr[2].trim());
           jemsWorkingTime(N, B, M);
        }
    }   
}
