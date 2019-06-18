#include <cstring>
#include <iostream>
#include <unordered_map>
using namespace std;

template<typename T>
class node {
public:
	string key;
	T value;
	node<T> * next;

	node (string k, T val) {
		key = k;
		value = val;
		next = NULL;
	}
};

template<typename T>
class hashMap {
private:
	// Array of pointers
	node<T> **table;
	// Currently number of elements stored
	int cs;
	// Table maximum size
	int ms;

	int hashFunction(string key) {
		int ans = 0;
		// k = 37
		int p = 1;
		int L = key.length();

		for (int i = 0; i < L; i++)
		{
			ans += key[i] * p;

			p = p*37;

			ans%=ms;
			p%=ms;
		}
		return ans;
	}

public:
	hashMap() {
		cs=0;
		ms=7;
		table = new node<T> *[ms];
		for (int i = 0; i < ms; ++i)
		{
			table[i] = NULL;
		}
	}

	void insert (string key, T value) {
		int i = hashFunction(key);

		node<T> *n = new node<T>(key, value);
		n->next = table[i];
		table[i] = n;

		cs++;
	}

	void show() {

		for (int i = 0; i < ms; ++i)
		{
			node<T> *temp = table[i];
			cout<<"Table "<<i<<" = ";
			while(temp!=NULL) {
				cout<<temp->key<<"--->";
				temp=temp->next;
			}

			cout<<endl;
		}
	}
    T *search(string key){
        int i=hashFunction(key);

    }
};
