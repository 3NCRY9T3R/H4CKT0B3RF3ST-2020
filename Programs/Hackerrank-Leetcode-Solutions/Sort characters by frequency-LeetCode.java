class Solution {
    
    public class pair implements Comparable<pair>{
        
        char ch;
        int freq;
        
        pair(char ch, int freq){
            this.ch=ch;
            this.freq=freq;
            
        }
        
       public int compareTo(pair o){
           return o.freq-this.freq;
        }
        
    }   
    
    
    
    
    
    public String frequencySort(String s) {
        
        HashMap<Character, Integer> hm= new HashMap<>();
        
       for(int i=0;i<s.length();i++){
           
           char ch= s.charAt(i);
           if(!hm.containsKey(ch)){
               hm.put(ch,1);
           }
         else{
             int val =hm.get(ch);
             hm.put(ch,val+1);    
         }
           
           
       } 
        
       PriorityQueue<pair> pq= new PriorityQueue<>();
        
        Set<Character> st= hm.keySet();
        for(char ch: st)
        {
            int freq= hm.get(ch);
            pair p = new pair(ch, freq);
            pq.add(p);
        }
        
        
        String ans ="";
        while(pq.size()!=0)
        {
            pair p= pq.remove();
           
            while(p.freq-->0)
            {
                ans+=p.ch;
            }
        }
        return ans;
        
    }
}
