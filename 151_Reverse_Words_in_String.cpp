Leetcode 151: Reverse Words in a String
Detailed video explanation link: https://youtu.be/vhnRAaJybpA

C++:
----
string reverseWords(string s) {
    string result;
    int i = 0;
    int n = s.length();

    while(i < n){
        while(i < n && s[i] == ' ') i++;
        if(i >= n) break;
        int j = i + 1;
        while(j < n && s[j] != ' ') j++;
        string sub = s.substr(i, j-i);
        if(result.length() == 0) result = sub;
        else result = sub + " " + result;
        i = j+1;
    }
    return result;
}


Java:
----
public String reverseWords(String s) {
    String result = new String();
    int i = 0;
    int n = s.length();

    while(i < n){
        while(i < n && s.charAt(i) == ' ') i++;
        if(i >= n) break;
        int j = i + 1;
        while(j < n && s.charAt(j) != ' ') j++;
        String sub = s.substring(i, j);
        if(result.length() == 0) result = sub;
        else result = sub + " " + result;
        i = j+1;
    }
    return result;
}


Python3:
-------
def reverseWords(self, s: str) -> str:
    result = ""
    i = 0
    n = len(s)

    while i < n:
        while i < n and s[i] == ' ': i += 1
        if i >= n: break
        j = i + 1
        while j < n and s[j] != ' ': j += 1
        sub = s[i:j]
        if len(result) == 0: result = sub
        else: result = sub + " " + result
        i = j+1

    return result
    
    
