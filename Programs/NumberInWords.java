//Print a natural number(less than or equal to 1000 )in words
//Eg- input=152  output=One Hundred and Fifty Two


import java.io.*;
class Main
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String ty[]={" "," ","Twenty","Thrirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
        String ten[]={" ","Ten","Eleven"," Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
        String unit[]={" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        System.out.print("Enter a number: ");
        int n=Integer.parseInt(br.readLine());
        if(n<1 || n>9999)
        System.out.println("out of range");
        else
        {
            int th=n/1000;
            int h=(n/100)%10;
            int t=(n/10)%10;
            int u=n%10;
            System.out.print("Output: ");
            if(th!=0)
            System.out.print(unit[th]+" Thousand ");
            if(h!=0)
            System.out.print(" "+unit[h]+" Hundred ");
            if((t!=0 || u!=0)&&(th!=0 || h!=0))
            System.out.print(" and ");
            if(t==1)
            System.out.print(" "+ten[u+1]);
            else
            System.out.print(" "+ty[t]+" "+unit[u]);
            
        }
        
    }
}
