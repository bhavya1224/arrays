#include <bits/stdc++.h>
#ifdef WINDOWS
  #include <direct.h>
  #define GetCurrentDir _getcwd
#else
  #include <unistd.h>
  #define GetCurrentDir getcwd
#endif
using namespace std;

string getPath(){
    char cCurrentPath[FILENAME_MAX];
    if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath))){
        return "0";
    }
    cCurrentPath[sizeof(cCurrentPath) - 1] = '\0';

    return cCurrentPath;
}

int main(){
    string fName = "/Test";//change the folder name in case you take code to some other folder
    string path = getPath();
    if(path.find(fName)== string::npos){
        path += fName;
    }
    cout << path;
}
