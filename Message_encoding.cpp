#include <bits/stdc++.h> 
string encode(string &message)
{
    int message_len=message.length();
    int repeat=1;
    char letter=message[0];
    string output="";
    for (int i=1;i<message_len;i++){
        if (message[i] == letter) {
            repeat += 1;
      }
        else {
        output += letter + to_string(repeat);
        letter = message[i];
        repeat = 1;
      }
    }
    output+=letter+to_string(repeat);

    return output;
}