// Implementation of Tree with its most commonly used techniques that is preorder, postorder, inorder.

import java.util.*;

public class Tree {
	
  static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
	
	Node root = createTree();
	inOrder(root);
	System.out.println();
	preOrder(root);
	System.out.println();
	postOrder(root);
	System.out.println();
	}
	  static Node createTree() {
		  Node root = null;
		  System.out.println("Enter Data: ");
		  int data = sc.nextInt();
		  if(data==-1) {
			  return null;
		  }
		  root = new Node(data);
		  
		  System.out.println("Enter Left for "+data);
		  root.left = createTree();
		  System.out.println("Enter Right for "+data);
		  root.right =createTree();
		  
		  return root;
	  }
     class Node{
	 Node left,right;
	 int  data;
	 
	 public Node(int data) {
		 this.data= data;
	 }
	  
	  static void preOrder(Node root) {
		  if(root==null) {
			  return;
		  }
		  System.out.print(root.data+" ");
		  preOrder(root.left);
		  preOrder(root.right);	  
	  } 
	  static void postOrder(Node root) {
		  if(root==null) {
			  return;
		  }
		  postOrder(root.left);
		  postOrder(root.right);
		  System.out.print(root.data+" "); 
	  }
	  static void inOrder(Node root) {
		  if(root==null) {
			  return;
		  }
		  inOrder(root.left);
		  System.out.print(root.data+" ");
		  inOrder(root.right);
		  
	  }
}

 }
