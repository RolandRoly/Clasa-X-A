#include<iostream> 
using namespace std;
/**
 * Se citeste un sir de caractere. Sa se numere  cuvintele din sir, stiind ca ele sunt separate prin una sau mai multe spatii.
 * **/
char sir[100]; // sirul pe care il citesc.
char *p; /// pointerul pentru   gasirea cuvintelor
int nr=0; // variabila in care numar cuvintele


int main()
{
 cout << "Dati  sir  :"; cin.get(sir,100); cin.get(); /// citesc sirul
 p=strstr(sir," ");
 while(p)
 { 
  nr++;/// daca p nu este Null, am gasit un cuvant.
  p=strstr(NULL," ");
 }
 cout << "In  sir exista :"<< nr << " cuvinte . "<<endl;
 

return 0;
}
