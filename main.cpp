#include <bits/stdc++.h>

using namespace std;

string encrypt(string phrase, string key) { 
  string result = "";
    int s = 0; 

    for(int i = 0; i < phrase.length(); i++) { 
      s = (key[i % key.length()] - 97);

      result += char(int(phrase[i] - 97 + s) % 26 + 97);
    }

    return result; 
}

string decrypt(string phrase, string key) { 
  string result = "";
    int s = 0; 

    for(int i = 0; i < phrase.length(); i++) { 
      s = 26 - (key[i % key.length()] - 97);

      result += char(int(phrase[i] - 97 + s) % 26 + 97);
    }

    return result; 
}


int main()
{
    string s4 = encrypt("startwarningiheardreportofourbreakinonthenewsstillwaitingonalarmtestschedulesiwillreportbacktomorrowwithfinalplanforextrasecurityisuggestweburnourlettersafterreadingandswitchourletterstonumbersusingpolybiussquaredropmessageunderthebenchattrainstationend", "sskkuullll"); 
    cout << s4 << "\n\n"; 
    string result = decrypt(s4, "sskkuullll");
    cout << result << "\n";
}