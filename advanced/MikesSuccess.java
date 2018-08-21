import java.io.BufferedReader;
import java.io.InputStreamReader;
public class PracticeSession {
    
    public static void checkSuccess(String check[]){
        boolean flag=true;
        for (String check1 : check) {
            for (int j = 0; j < check1.length()-2; j++) {
                if (check1.charAt(j) != check1.charAt(j+2)) {
                    flag=false;
                }
            }
            if(flag){
                System.out.println("YES");
            }else
                System.out.println("NO");  
        }
    }
    
    public static void main(String[] args)throws Exception{
        int test_cases;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        test_cases = Integer.parseInt(br.readLine().trim());
        String[] string = new String[test_cases];
        for(int i=0;i<test_cases;i++){
            string[i]= br.readLine().trim();
        }
        checkSuccess(string);
    }   
}
/*
Input:
2
ABABAB
ABC
Output:
YES
NO
*/
