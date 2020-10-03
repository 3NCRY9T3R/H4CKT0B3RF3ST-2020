//Program for Implementation of Breadth First Search and Depth First Search of an Undirected Graph.
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.*;

public class Main 
{ 
    public static int V=0,E=0;//vertices and edges
    public static ArrayList<ArrayList<Integer> >graph;//Graph DS
	static class FastReader 
	{ 
		BufferedReader br; 
		StringTokenizer st; 

		public FastReader() 
		{ 
			br = new BufferedReader(new
					InputStreamReader(System.in)); 
		} 

		String next() 
		{ 
			while (st == null || !st.hasMoreElements()) 
			{ 
				try
				{ 
					st = new StringTokenizer(br.readLine()); 
				} 
				catch (IOException e) 
				{ 
					e.printStackTrace(); 
				} 
			} 
			return st.nextToken(); 
		} 

		int nextInt() 
		{ 
			return Integer.parseInt(next()); 
		} 

		long nextLong() 
		{ 
			return Long.parseLong(next()); 
		} 

		double nextDouble() 
		{ 
			return Double.parseDouble(next()); 
		} 

		String nextLine() 
		{ 
			String str = ""; 
			try
			{ 
				str = br.readLine(); 
			} 
			catch (IOException e) 
			{ 
				e.printStackTrace(); 
			} 
			return str; 
		} 
	} 
    public static void addEdge(int iniV,int finV){
            if(iniV>=0&&finV>=0&&iniV<V&&finV<V){
                graph.get(iniV).add(finV);
                graph.get(finV).add(iniV);
            }
    }
    public static void bfs(int src,boolean[] visited){
        if(src<0||src>=V||visited[src])
            return;
        visited[src]=true;
        Queue<Integer> q=new LinkedList<Integer>();
        q.add(src);
        while(!q.isEmpty()){
            int currV=q.poll();
            System.out.print(currV+"->");
            for(int i=0;i<graph.get(currV).size();i++){
                if(!visited[graph.get(currV).get(i)]){
                    q.add(graph.get(currV).get(i));
                    visited[graph.get(currV).get(i)]=true;
                }
            }
        }
        System.out.println("null");
    }
    public static void dfs(int src,boolean[] visited){
        if(src<0||src>=V||visited[src])
            return;
        visited[src]=true;
        System.out.print(src+"->");
        for(int i=0;i<graph.get(src).size();i++){
            if(!visited[graph.get(src).get(i)])
                dfs(graph.get(src).get(i),visited);
        }
    }
	public static void main(String[] args) 
	{ 
		FastReader scan=new FastReader(); 
		V=scan.nextInt();//v=vertices ...0 based indexing
		E=scan.nextInt();//e=edges;
		graph=new ArrayList<ArrayList<Integer>>();//graph 
		for(int i=0;i<V;i++)
		    graph.add(new ArrayList<Integer>());
		for(int i=1;i<=E;i++){
		    addEdge(scan.nextInt(),scan.nextInt());//add edge between two vertices
		}
		int choice=scan.nextInt();// 0) DFS   , 1) BFS
		int src=scan.nextInt();//enter source of traversal
		if(choice==0){
		    System.out.println("BFS starts here:");
		    bfs(src,new boolean[V]);
		}
		else{
		    System.out.println("DFS starts here:");
		    dfs(src,new boolean[V]);
            System.out.println("null");
		} 
	} 
} 
