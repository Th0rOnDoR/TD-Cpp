#pragma once
#include <string>
using std::string;

namespace TD
{
	class TD_Boucles {

	public: 
		static int Addition(int x, int y);
		static int MultiplicationN(int x, int y);
		static int MultiplicationZ(int x, int y);
		static int Puissance(int x, int n);
		static int Fibonacci(int n);
		static int Mirroir(int x);
		static int Quotient(int x, int y);
		static int Factorielle(int x);
		static int FactorielleCalculbre(int limit);
	};


	class TD_Strings {
	public: 
		static int Recherche(string str);
		static int Appartient(string str, char c);
		static bool Palindrome(string str);
		static bool EstPhrase(string str);
		static int Sous_chaine(string str, string sub_str);
		static int Sous_palindrome(string str);
	};


	class TD_Imperative {
	public: 
		static bool test(int n);
		static int sum_digits(int n);
		static int product_digit(int n);
		static int abs(int n);
		static int loop(int n);
		static int List_to_9(int x);
	};
}