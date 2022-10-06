#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    for(int i = 0; i < s.length() - 1 && s.length() >= 2; i++) {
        if(s[i] == s[i+1]) {
            s.erase(i, 2);
            i = -1;
        }
    }
    if(s.length() == 0) return "Empty String";
    else return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}