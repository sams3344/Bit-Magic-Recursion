long long power(int N,int R){
    if(R==0) return 1;
    
    return (N*(power(N,R-1)%1000000007)%1000000007);
}
