long long int minHappiness(long long int a[], long long int b[], int n, int k){
    int max=0;
    int index=0;
    for (int i=0; i< n; i++){
        if (abs(b[i])>max){
            max=b[i];
            index=i;
        }
    }
    for (int i=0;i<k;i++){
        if(b[index]>0){
            a[index]-=2;
        }
        if (b[index]<0){
            a[index]+=2;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= a[i]*b[i];
    }
    return sum;
    
