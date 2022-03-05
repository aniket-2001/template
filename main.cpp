#include <bits/stdc++.h>
using namespace std;

#define ll 				  long long
#define vi 				  vector<int>
#define nline             "\n"
#define MOD               1000000007
#define pb 				  push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define mp  			  make_pair
#define all(v)            (v).begin(),(v).end()
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define mpii			  map<int ,int>
#define umpii 			  unordered_map<int,int>
#define np 				  next_permutation
#define pp                prev_permutation
#define maxe			  *max_element
#define mine			  *min_element
#define gi 				  greater<int> ()

bool is_prime(int n) {
	if (n == 1)return false; if (n == 2) {return true;} for (int i = 2; i * i <= n; i++) {if (n % i == 0)return false;} return true;
}



//Bits
string decToBinary(int n) {string s = ""; int i = 0; while (n > 0) {s = to_string(n % 2) + s; n = n / 2; i++;} return s;}
ll binaryToDecimal(string n) {string num = n; ll dec_value = 0; int base = 1; int len = num.length(); for (int i = len - 1; i >= 0; i--) {if (num[i] == '1')dec_value += base; base = base * 2;} return dec_value;}

//Check
bool isPowerOfTwo(int n) {if (n == 0)return false; return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
//----------------------------------------------------------------------------------------------------------------------------- -

int main() {

	int arr[6] = {5, 7, 2, 8, 1, 9};
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}

	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;

}

// public class Sorting {

// 	public static void main(String[] args) {
// 		// TODO Auto-generated method stub
// 		int a[] = {5, 7, 2, 8, 1, 9};
// 		int n = a.length;

// 		for (int i = 0 ; i < n; i++) {
// 			for (int j = 0; j < n; j++) {
// 				if (a[i] > a[j]) {
// 					int temp = a[j];
// 					a[j] = a[i];
// 					a[i] = temp;
// 				}
// 			}
// 		}
// 		for (int i = 0; i < n; i++) {
// 			System.out.print(a[i] + " ");
// 		}

// 	}

// }


