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
    string c; 
    cout << "Encrypt/Decrypt (E/D): ";
    cin >> c;

    string phrase;
    string key;
    cout << "Phrase: ";
    cin >> phrase;

    cout << "Key: ";
    cin >> key;

  
    if(c == "E") { 
      string res = encrypt(phrase, key);
      cout << "Encrypted Phrase: " << res << endl;
    }
    else { 
      string res = decrypt(phrase, key);
      cout << "Decrypted Phrase: " << res << endl;
    }
    


}