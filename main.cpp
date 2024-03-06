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
string Cozme(string sifreliMetin)
{   int i;
    int satir;
    int sutun;
    string metin;
    string polybiusKaresi[5] = {
        "ABCDE",
        "FGHIK",
        "LMNOP",
        "QRSTU",
        "VWXYZ"
    };
    for(i = 0; i < sifreliMetin.length(); i = i + 3)
        satir = sifreliMetin[i] - '1';
        sutun = sifreliMetin[i] - '1';
        if(satir >= 0 && satir < 5 && sutun >=0 && sutun < 5)
        {
            metin = metin + polybiusKaresi[satir][sutun];
            
        }
        else if(sifreliMetin[i] == ' ')
        {
            metin = metin + " ";
            i = i - 2;
        }
        return metin;
}

