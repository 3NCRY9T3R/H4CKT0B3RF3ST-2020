class Solution {
   
    public List<List<Integer>> pathSum(TreeNode root, int sum) {
       List<List<Integer>>  res = new LinkedList<>();
        dfs(root, sum, new LinkedList<>(),res);
        return res;
    }
    private void dfs(TreeNode root, int sum, List<Integer> path ,  List<List<Integer>>  res ){
        if (root == null ){
            return;
        }
        sum -= root.val;
         path.add(root.val);
       
        if (root.left==null && root.right==null && sum == 0){
            res.add(new LinkedList<>(path));
             path.remove(path.size()-1);
            return;
        }
        
        dfs(root.left, sum, path,res);
        dfs(root.right, sum, path,res);
        path.remove(path.size() - 1);
    }
        
}