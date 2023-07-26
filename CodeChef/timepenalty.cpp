    #include <iostream>
    using namespace std;
    int main() {
        // your code goes here
        int n,a,b,c,d;
        cin>>n;
        while(n--){
            cin>>a>>b>>c>>d;
            int e=max(a,b);
            int f=max(c,d);
            if(e>f){
                cout<<"Q"<<endl;
            }else if(f>e){
                cout<<"P"<<endl;
            }else{
                cout<<"TIE"<<endl;
            }
        }
        return 0;
    }
