ll st[300004][22];
ll func(ll x,ll y){ //edit
    return Min(x,y);
}
ll query(ll s,ll e){
    ll x = 1e18; // edit
    for (int j = 20; j >= 0; j--) {
        if ((1 << j) <= e - s + 1) {
            x = func (x, st[s][j]);
            s += 1 << j;
        }
    }
    return x;
}
void precalc(vl arr){
    
    for (int j = 0; j <= 20; j++){ //배열 초기화
        for (int i = 0; i<arr.size(); i++){
            st[i][j]=0;
        }
    }
    
    for (int i = 0; i < arr.size(); i++){
        st[i][0] = arr[i];
    }
    
    for (ll j = 1; j <= 20; j++){
        for (ll i = 0; i + (1 << j) < arr.size(); i++){
            st[i][j] = func(st[i][j-1],st[i + (1LL << (j - 1))][j - 1]);
        }
    }
}
void solve(){
    vl a={1,3,4,2,3,4,2,5,5,4};
    
    precalc(a);
    
    cout<<query(7,8)<<"\n"; 
}
