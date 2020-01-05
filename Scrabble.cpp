#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char,int> getFrequencyMap(string word) {
	map<char,int> frequencyMap;
	for (int a0 = 0; a0 < word.size(); a0++) {
		map<char,int>::iterator search = frequencyMap.find(word[a0]); 
		if (search != frequencyMap.end()) {
			search->second += 1;
		} else {
			frequencyMap.insert(pair<char,int>(word[a0],1));
		}
		
	}
	return frequencyMap;
}

int wordScores (string word, int n) {
	int score = 0;
	map<char, int> hashMap;
	hashMap.insert(pair<char,int>('a',1));
	hashMap.insert(pair<char,int> ('b', 3));
	hashMap.insert(pair<char,int> ('c', 3));
	hashMap.insert(pair<char,int> ('d', 2));
	hashMap.insert(pair<char,int> ('e', 1));
	hashMap.insert(pair<char,int> ('f', 4));
	hashMap.insert(pair<char,int> ('g', 2));
	hashMap.insert(pair<char,int> ('h', 4));
	hashMap.insert(pair<char,int> ('i', 1));
	hashMap.insert(pair<char,int> ('j', 8));
	hashMap.insert(pair<char,int> ('k', 5));
	hashMap.insert(pair<char,int> ('l', 1));
	hashMap.insert(pair<char,int> ('m', 3));
	hashMap.insert(pair<char,int> ('n', 1));
	hashMap.insert(pair<char,int> ('o', 1));
	hashMap.insert(pair<char,int> ('p', 3));
	hashMap.insert(pair<char,int> ('q', 10));
	hashMap.insert(pair<char,int> ('r', 1));
	hashMap.insert(pair<char,int> ('s', 1));
	hashMap.insert(pair<char,int> ('t', 1));
	hashMap.insert(pair<char,int> ('u', 1));
	hashMap.insert(pair<char,int> ('v', 4));
	hashMap.insert(pair<char,int> ('w', 4));
	hashMap.insert(pair<char,int> ('x', 8));
	hashMap.insert(pair<char,int> ('y', 4));
	hashMap.insert(pair<char,int> ('z', 10));
	cout << "About to execute for loop" << endl;
	for(int a0; a0 < word.size(); a0++) {
		char currChar = word[a0];
		if (currChar >= 65 && currChar <= 92) {currChar += 32;} 
		cout << "Value of looping character [" << currChar  << "] And its key value: " << hashMap.find(currChar)->second << endl;
		cout << endl;
		score += hashMap.find(currChar)->second;	
	}
	return word.size()!= n?score*word.size():score*word.size()+50;
}

int main () {
	//int score = wordScores("Kosalendra", 5);
	//cout << score << endl;

	map<char,int> testMap = getFrequencyMap("Kosalendra");
        map<char,int>::iterator it = testMap.begin();
   	while (it != testMap.end()) {
        	cout << it->first << " : " << it->second << endl;    
		it++; 
    	}
	return 0;
}
