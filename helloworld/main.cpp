#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <vector>



class stos{

private:

public:
int n;
int m;
std::stack <float> zawartosc;
void pushback (std::queue <float> tasmociag){
n =10+rand()%10;
m=n;
while (n>=0 && tasmociag.empty()==false)
{
zawartosc.push(tasmociag.front());  
n= n - tasmociag.front();
tasmociag.pop();
}}
void wyswietlanie (){
    std::cout<<"Ladownosc auta "<<m<<'\n';
    while(zawartosc.empty()==false){
        std::cout<<zawartosc.top();
        zawartosc.pop();
    }
    std::cout<<'\n';
}

};

int main(){
    int k;
    std::cout<<"Podaj liczbe elementow tasmociagu"<<'\n';
    std::cin>>k;

    std::queue <float> tasmociag;
    srand(time(NULL));
    for(int i=0;i<k;i++){
        tasmociag.push (rand()%10);
    }
    std::vector <stos> liczba;
    int p=0;
    while(tasmociag.empty()==false){

    liczba[p].pushback(tasmociag);
    liczba[p].wyswietlanie();
    p++;
    }
    

return 0;
}