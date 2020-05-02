#include<iostream>
    using namespace std;
    class point{
    private:
        int x,y;
     
    public:
        point()
        {
            x =0;
            y =0 ;
        
        }
        
        friend ostream&operator<< (ostream& cin, point& z){
        
            cin<<z.x<<"  "<<z.y<<endl;
            return cin;
        }    
     
        friend istream&operator>>(istream& a, point& z)
        {
        
            a>>z.x;
            a>>z.y;
            return a;
        }
     
        point&operator-(point& a)
        {
            a.x = a.x - x;
            a.y = a.y - y;
            return a;
            
        }
    };
     
    int main(){
     
        point n,m;
        cin>>n>>m;    
        cout<<n-m<<endl;
     
    }