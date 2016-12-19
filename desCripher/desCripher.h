#pragma once
//typedef bool bool;
enum Cipher
{
	DECRYPT = 0,
	ENCRYPT = 1
};

//void generate_key(const char* in, DES_KEY key);
void des_encrypt(const char* in, const char* key, char* out, Cipher flag);
//void Tramsfer(const int inTable[], const bool in[], bool out[], size_t outlenght);
//void RotateLeft(bool* in, size_t inlenght, size_t count);
//void Bit2Byte(const bool* in, size_t inlenght, char* out);
//void Byte2Bit(const char* in, bool* out, size_t outlenght);
//void Xor(bool* inoutA, const bool* inB, size_t lenght);
//void SFunc(bool* CL/*32bits*/, bool* CR/*32bits*/, const DES_KEY key/*16*48bits*/, int count, Cipher flag);