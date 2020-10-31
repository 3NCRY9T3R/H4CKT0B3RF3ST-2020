class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
      List <String> ans= new ArrayList<>();
        HashMap<String, Integer>  hm = new HashMap<>();
        for(int i=0;i<=s.length()-10;i++)
        {
            
            String check=s.substring(i,i+10);
            
            if(hm.containsKey(check))
            {
                int val = hm.get(check);
                hm.put(check,val+1);
            }
            else{
                hm.put(check,1);
            }
        }
        
       Set<String> st= hm.keySet();
        for(String str : st)
        {
            if(hm.get(str)>1)
            {
                ans.add(str);
            }
        }
        return ans;
    }
}
