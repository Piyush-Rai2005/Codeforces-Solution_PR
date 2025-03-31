import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-->0){
            int n = s.nextInt();
            String S = s.next();
            int[] mp = new int[26];
            Arrays.fill(mp,-1);
            int[] vis = new int[26];
            int j=0;
            for(int i=0;i<n;i++){
                int idx = S.charAt(i) - 'a';
                if(mp[idx]==-1){
                    
                        for(int k=j;k<26;k++){
                            if(vis[k]==0 && k!=idx){
                                mp[idx] = k;
                                vis[k] = 1;
                                if(k==25){
                                    j=0;
                                }
                                else{
                                    j=k+1;
                                }
                               break;
                            }
                            if(k==25){
                                k=-1;
                            }
                            
                        }
                        System.out.print((char)(mp[idx]+97));
                    


                }
                else{
                    System.out.print((char)(mp[idx]+97));
                }
            }
            System.out.println("");
        }
    }
}