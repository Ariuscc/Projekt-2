#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <vector>



class stos{

private:

int n=10+rand()%10;
std::stack <float> zawartosc;
float waga_max=0;
public:
void pushback (std::queue <float> tasmociag){
n = n - tasmociag.front();
while (n>=0)
{
zawartosc.push(tasmociag.front());
tasmociag.pop();
n= n - tasmociag.front();
}}
void wyswietlanie (){
    std::cout<<"Ladownosc auta "<<n<<'\n';
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
    for(int j=0;j<k;j++){
       std::cout<< tasmociag.front();
       tasmociag.pop(); 
    }p++;
    }
    

return 0;
}