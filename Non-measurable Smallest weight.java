import java.util.*;
public class Hello {
      
      public static void main(String[] args)  {
      
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int w[]=new int[n];
         for(int i=0;i<n;i++){
         w[i]=sc.nextInt();
         }
         int measure=1;
         Arrays.sort(w);
         for(int i=0;i<n;i++){
            if(w[i]<=measure){
            measure+=w[i];
            }
            else{
            break;
            }
         }
         System.out.println(measure);
    }
 }
         
         
         
         
