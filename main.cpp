#include <iostream>
using namespace std;
string Sifreleme(string metin)
{
    char harf;
    string sifreliMetin;
    string polybiusKaresi[5] = {
        "ABCDE",
        "FGHIK",
        "LMNOP",
        "QRSTU",
        "VWXYZ"
    };
    for(char harf : metin)
        harf = toupper(harf);
        if(isalpha(harf))
        {
            if(harf == 'J')
                harf = 'I';

            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    if(polybiusKaresi[i][j] == harf)
                    {
                        sifreliMetin = sifreliMetin + to_string(i+1);
                        sifreliMetin = sifreliMetin + to_string(j+1);
                        sifreliMetin = sifreliMetin + " ";
                    }
                }
            }
        }   else if (harf == ' ')
            {
                sifreliMetin = sifreliMetin + " ";
            }
    return sifreliMetin;
}