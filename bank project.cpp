#include <iostream>
#include<string>
using namespace std;
int main()
{    
    string name;
    double cardnum;
    float balance = 2000;
    int pass=1234;
    int pin;
    float yatir;
    float cek;
    int secenek;
    int s;
    
    
    while(pin!=pass)
    {
    
    cout <<"enter your pass\t";
    cin >> pin;
    }
    
      
    
    
    cout <<"enter your name\n";
    cin>> name;
    
    cout<<" enter your card number\n";
    cin>> cardnum;
      
      
      
      do {
    
    cout <<"1-para yatir\n";
    cout <<"2-para cek\n";
    cout <<"3-cik\n";
    
    
    cout <<"yapacaginiz islemi seceniz\n";
    cin >> secenek;
  
    
    switch  (secenek)
    {
    
    
         case 1 :
            cout <<"yatiracaiginiz para giriniz\n";
             cin>> yatir;     
             balance+= yatir;
             cout << balance<<"\n";
             break;
         
         
         case 2 :
          
             
             cout << "cekeceginiz para giriniz\n";
             cin >> cek;
             if (cek>balance){
             cout <<"yeterli paraniz yok\n\n\n";}
             
             else {
             
             balance-=cek;
             cout <<balance <<"\n";  }
             break;
             
             case 3 :
             
                s=1;
         
    }   
    } while (s!=1);
    
         

    
    
    
    
    
    
    



}
   
