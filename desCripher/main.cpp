#include "desCripher.h"
#include <iostream>
#include <string>
#include <memory.h>
using namespace std;
int main()
{
	
	string key  = "cheng";					//钥匙
	string text = "Welcome to cheng's blog! www.cheng668.com";    //明文
	string ent  = "";							//密文
	string destring = "";						//解密明文

	//修改密钥格式
	char key11[10];
	memset(key11, 0, 10);
	if (key.size() < 8)
		memcpy(key11, key.c_str(), sizeof(key.c_str()));
	else
		memcpy(key11, key.c_str(), 8);

	//将明文分开每8个字节进行加密
	for (size_t i = 0;i<(text.length()+7)/8;i++)
	{
	    char entext[9],intext[9];
		memset(entext, 0, 9);
		memset(intext, 0, 9);
		_memccpy(intext, text.c_str() + 8 * i, NULL, 8);
		des_encrypt(intext, key11, entext, ENCRYPT);
		ent += entext;
	}
	cout << ent << endl;

	//将密文转变为每8个字节进行解密
	for (size_t i = 0; i < (ent.length() + 7) / 8; i++)
	{
		char outtext[9],detext[9];
		memset(outtext, 0, 9);
		memset(detext, 0, 9);
		_memccpy(detext, ent.c_str() + 8 * i, NULL, 8);
		des_encrypt(detext, key11, outtext, DECRYPT);
		destring += outtext;
	}
	cout << destring << endl;
	system("pause");
	return 0;
}