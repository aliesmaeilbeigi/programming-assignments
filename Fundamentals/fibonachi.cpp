#include <iostream>
using namespace std;

int fibonacci(int a){
int res;
if(a==1){res=0;}
if(a==2 || a==3){res=1;}
if(a>3){res=fibonacci(a-2)+fibonacci(a-1);}
return res;
}

int main(){
int shomare;

while (true) {

        cout << "ye shomare vared kon (ya -100 baraye kharej shodan): ";
        cin>> shomare;

        while(shomare<1){
            cout<<"ERROR!, try again:";
            cin>> shomare;
            if (shomare == -100) {break; /* اگر کاربر 100- وارد کند، حلقه اول متوقف می‌شود.*/}   }

        if (shomare == -100) {
            break; /* اگر شماره 100- بود، حلقه دوم متوقف می‌شود.*/}
        

    cout<<fibonacci(shomare)<<"\n";
}   

    return 0;
}