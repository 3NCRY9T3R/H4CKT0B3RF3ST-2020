import java.io.*;
import java.util.*;

public class Main {
   public static class Envelope implements Comparable<Envelope> {
      int w;
      int h;

      public int compareTo(Envelope o){
         return this.w - o.w;
      }
   }

   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int n = Integer.parseInt(br.readLine());
      Envelope[] envlps = new Envelope[n];
      for (int i = 0; i < envlps.length; i++) {
         String str = br.readLine();
         envlps[i] = new Envelope();
         envlps[i].w = Integer.parseInt(str.split(" ")[0]);
         envlps[i].h = Integer.parseInt(str.split(" ")[1]);
      }

      Arrays.sort(envlps);
      int[] lis = new int[envlps.length];
      for(int i = 0; i < envlps.length; i++){
         Integer max = null;

         for(int j = 0; j < i; j++){
            if(envlps[j].h < envlps[i].h && envlps[j].w < envlps[i].w){
               if(max == null || lis[j] > max){
                  max = lis[j];
               }
            }
         }

         if(max != null){
            lis[i] = max + 1;
         } else {
            lis[i] = 1;
         }
      }

      int omax = 0;
      for(int i = 0; i < envlps.length; i++){
         if(lis[i] > omax){
            omax = lis[i];
         }
      }
      System.out.println(omax);
   }

}


                        
