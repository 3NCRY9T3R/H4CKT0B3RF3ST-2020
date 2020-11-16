class Solution {
    public int minDepth(TreeNode node) {
       if(node == null)
        return 0;
        
        int left=minDepth(node.left);
        int right = minDepth(node.right);
        
        if(node.right != null && node.left != null)
        return  Math.min(left,right)+1;
        else if(node.right != null && node.left==null)
        return right+1;
        else
        return left+1;
        
    }
}
