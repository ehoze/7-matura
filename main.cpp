#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class scalanie7
{
				vector <int> t1;
				vector <int> t2;
                vector <int> scal;
       			
        public:
                void wprowadz();
                void wypisz();
                int scalenie();
                int obliczanie();
                int sprawdzenie(int x, int y);
                int zapiszDoPliku(const char *);             
};

void scalanie7::wprowadz()
{
		double k,k2;
		fstream plik;  
        int wprowadzany;
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 7\\t1.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                  	plik >> wprowadzany;
                	t1.push_back(wprowadzany);
                	k++;
                   }
                   plik.close();   
                   
                   
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 7\\t2.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                  	plik >> wprowadzany;
                	t2.push_back(wprowadzany);
                	k++;
                   }
                   plik.close();  
                   
        for (int i = 0; i < k; i++)
        {
        	if (i < (k/2))
        	{
        		scal.push_back(t1[i]);
			}
			else
			{
				for (int i = 0; i <= 6; i++)
        		{
				scal.push_back(t2[i]);
				}
			}
		}
}


void scalanie7::wypisz()
{
		for (int i = 0; i < t1.size(); i++)
		{
			cout << t1[i] << "\n";
		}
		cout << endl;
		
		for (int i = 0; i < t2.size(); i++)
		{
			cout << t2[i] << "\n";
		}
		
		cout << endl;
		int licznik = 1;
		for (int i = 0; i < scal.size(); i++)
		{
			cout << licznik << ". " << scal[i] << "\n";
			licznik++;
		}
}


int scalanie7::scalenie()
{
	
}

int scalanie7::obliczanie()
{
	int n,k;
	if (n == 1)
	{
		return scal[n];
	}
	k = n/2;
	t1[1];
	t2[1];
	return scalenie();
}


int scalanie7::zapiszDoPliku(const char *nazwa)
{	
		int max;
        ofstream plik;
        plik.open(nazwa);
    	plik << "Najwieksza wzglednie pierwsza: " << max;
        plik.close();  
        cout << max;
}



int main()
{
	scalanie7 x;
    x.wprowadz();
    x.wypisz();
//    x.scalenie();
//    x.obliczanie();
//    x.zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat 7\\wynik.txt");
    return 0;
}
