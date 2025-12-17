#include <iostream>
#include <cmath>
using namespace std;
struct Punkt{double x,y;};
struct Trojkat{Punkt A,B,C;};
bool CzyLezaNaProstej(Punkt A,Punkt B,Punkt C){
    double w=A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y);
    return w==0;
}
float PoleTrojkata(Trojkat T){
    double a=sqrt(pow(T.B.x-T.C.x,2)+pow(T.B.y-T.C.y,2));
    double b=sqrt(pow(T.A.x-T.C.x,2)+pow(T.A.y-T.C.y,2));
    double c=sqrt(pow(T.A.x-T.B.x,2)+pow(T.A.y-T.B.y,2));
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
    Trojkat t;
    bool punkty=false,wspolliniowe=false;
    int wybor;
    do{
        cout<<"Menu Glowne"<<endl;
        if(!punkty){cout<<"1.Podaj punkty A,B,C"<<endl<<"0.Zakoncz program"<<endl;}
        else{
            cout<<"1.Podaj punkty A,B,C"<<endl;
            cout<<"2.Sprawdz czy punkty leza na jednej prostej"<<endl;
            if(!wspolliniowe) cout<<"3.Oblicz pole trojkata"<<endl;
            cout<<"0.Zakoncz program"<<endl;
        }
        cout<<"Twoj wybor: ";cin>>wybor;
        switch(wybor){
            case 1:
                cout<<"Podaj wsp A (x SPACE y): ";cin>>t.A.x>>t.A.y;
                cout<<"Podaj wsp B (x SPACE y): ";cin>>t.B.x>>t.B.y;
                cout<<"Podaj wsp C (x SPACE y): ";cin>>t.C.x>>t.C.y;
                punkty=true;wspolliniowe=false;break;
            case 2:
                if(punkty){
                    wspolliniowe=CzyLezaNaProstej(t.A,t.B,t.C);
                    if(wspolliniowe) cout<<"Punkty leza na jednej prostej."<<endl;
                    else cout<<"Punkty NIE leza na jednej prostej."<<endl;
                }else cout<<"Najpierw podaj punkty."<<endl;
                break;
            case 3:
                if(punkty&&!wspolliniowe) cout<<"Pole trojkata wynosi: "<<PoleTrojkata(t)<<endl;
                else if(wspolliniowe) cout<<"Nie mozna liczyc pola - punkty leza na jednej prostej."<<endl;
                else cout<<"Najpierw podaj punkty."<<endl;
                break;
            case 0: cout<<"Koniec programu."<<endl;break;
            default: cout<<"Nieprawidlowy wybor."<<endl;
        }
    }while(wybor!=0);
    return 0;
}
