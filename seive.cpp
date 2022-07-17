void seive3(int n){
      vector<int> v(n,1);
      v[0]=v[1]=0;
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j=j+i){
            if(v[j])
                v[j]=0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
     if(v[i])
        cout<<i<<" ";
    }
    cout<<endl;
}
