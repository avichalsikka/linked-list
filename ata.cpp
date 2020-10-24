            #include <bits/stdc++.h>
                  #define ll long long  int
                  #define N 100000
                  #define f(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)
                  #define rf(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)
                  #define po pop_back
                  #define pb push_back
                  #define pp pair<ll,ll>
                  #define lb lower_bound
                  #define fi first
                  #define se second
                  #define debug(x) cout << #x << " = " << x << endl
                  #define ub upper_bound
                  #define ibs ios_base::sync_with_stdio(false)
                  #define cti cin.tie(0)
                  #define all(x) x.begin(),x.end()
                  #define PI 3.14159265
                  #define cot cout.tie(0)
                  using namespace std;
                   /**
                    * @author :: Sawlani
                    *
                    *
                    **/
                   int main()
                  {

                    freopen("input.txt","r",stdin);

                      ll n;
                      cin >> n;

                       vector <pair<ll,ll>> a(n+1),b(n+1);
                       vector <pair<ll,pair<char,ll> > > mix(2*n+1);

                       bool vis[n+1]={false};

                       f(i,1,n)
                       {
                          cin >> a[i].fi;
                          a[i].se=i;

                          mix[i].fi=a[i].fi;
                          mix[i].se.fi='a';
                          mix[i].se.se=a[i].se;
                       }

                       f(i,1,n)
                       {
                          cin >> b[i].fi;
                          b[i].se=i;

                          mix[i+n].fi=b[i].fi;
                          mix[i+n].se.fi='b';
                          mix[i+n].se.se=b[i].se;
                       }


                       sort(mix.begin()+1,mix.end());

                      ll cntA,cntB;
                      cntA=cntB=0;

                     ll k=n/2+n%2;
                     ll ans=0;
                      f(i,1,2*n)
                      {
                          if(!vis[mix[i].se.se])
                          {
                            vis[mix[i].se.se]=true;
                            ans+=mix[i].fi;
                          //  cout << mix[i].fi << " " <<  mix[i].se.fi << " " << mix[i].se.se << endl;
                            if(mix[i].se.fi=='a')
                              cntA++;
                            else
                              cntB++;
                          }

                          if(cntA==k||cntB==k)
                            break;
                      }

                      if(cntA==k)
                      {
                           f(i,1,n)
                           {
                              if(!vis[b[i].se]){
                          // cout << b[i].fi << " " <<  "b" << " " << b[i].se << endl;

                                ans+=b[i].fi;

                           }
                         }
                      }
                      else
                      {
                          f(i,1,n)
                           {
                              if(!vis[a[i].se])
                              {
                            //    cout << a[i].fi << " " <<  "a" << " " << a[i].se << endl;
                               ans+=a[i].fi;
                               }

                           }



                      }
                      cout <<  ans <<  endl;

}



