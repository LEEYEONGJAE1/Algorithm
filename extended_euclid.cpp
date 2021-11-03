pl egcd(ll a,ll b){
    if(b==0) return {1,0};
    else{
      pl t=egcd(b,a%b);
      return egcd(t.second,t.first-(a/b)*t.second);
    }
}
