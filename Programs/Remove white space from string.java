class RemoveSpace { 
	public static void main(String[] args) 
	{ 
		String str = "	My another PR	 "; 

		str = str.replaceAll("\\s", ""); 

		System.out.println(str); 
	} 
} 
