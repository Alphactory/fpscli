//
// Created by eighty on 1/5/21.
//

#include <fstream>
#include <iostream>
using namespace std;

string mapFileName = "map.txt";

int main()
{
    // Create Map of world space # = wall block, . = space
    char validWalls[2] = { '#', '@' }; // Valid flavours of walls
    wstring wmap;
    //create a file object to read text from into the map
    fstream mapFile;
    mapFile.open("../"+mapFileName, ios::in);
    if (!mapFile.is_open()){
        cout <<"could not find map file"<<endl;
    }else{
        string tmp;
        string map;
        while (getline(mapFile, tmp)) {
            map += tmp+"\n";
        }
        wstring temp_wmap(map.begin(), map.end());
        wmap = temp_wmap;
    }

}