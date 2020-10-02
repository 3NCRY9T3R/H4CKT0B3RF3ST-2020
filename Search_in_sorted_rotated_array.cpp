int solve(vector<int>a,int t)
{
    int i,j;
        i=0;
        j=a.size()-1;
        int mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(a[mid]==t)
                return mid;
            else if(a[i]<=a[mid])  //(if no.have index before the lowest no.index)
            {
                if(a[i]<=t&&a[mid]>t)
                {
                    j=mid-1;
                }
                else
                    i=mid+1;
            }
            else
            {
                if(a[mid]<t&&a[j]>=t)
                    i=mid+1;
                else
                    j=mid-1;
            }
        
        }
        return -1;
    
}
