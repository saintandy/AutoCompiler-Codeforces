// headers
	#include <algorithm>
	#include <iostream>
	#include <sstream>
	#include <cstring>
	#include <vector>
	#include <string>
	#include <cctype>
	#include <cmath>
	#include <queue>
	#include <deque>
	#include <cmath>
	#include <map>
	#include <set>
	
// namespaces
	using namespace std;
	
	
// defines and typedefs
	#define oo 2100000000
	#define PI 3.14159265358979323
	#define eps 0.0000001
	
	typedef long double lod;
	typedef long long lol;
	
	
// debugging
	template<typename T1>
		inline void deb(const T1 &);
	template<typename T1, typename T2>
		inline void deb(const T1 &, const T2 &);
	template<typename T1, typename T2, typename T3>
		inline void deb(const T1 &, const T2 &, const T3 &);
	template<typename T1, typename T2, typename T3, typename T4>
		inline void deb(const T1 &, const T2 &, const T3 &, const T4 &);
	template<typename T1, typename T2, typename T3, typename T4, typename T5>
		inline void deb(const T1 &, const T2 &, const T3 &, const T4 &, const T5 &);
#define DBG	
//----------------------------------------------------------------------------------



int main() {
	
}

//----------------------------------------------------------------------------------

	template<typename T1>
		inline void deb(const T1 &V1) {
			#ifdef ONLINE_JUDGE
			#else
				#ifdef DBG
					cout << V1;
				#endif
			#endif
		}
	template<typename T1, typename T2>
		inline void deb(const T1 &V1, const T2 &V2) {
			#ifdef ONLINE_JUDGE
			#else
				#ifdef DBG
					cout << V1 << V2;
				#endif
			#endif
		}
	template<typename T1, typename T2, typename T3>
		inline void deb(const T1 &V1, const T2 &V2, const T3 &V3) {
			#ifdef ONLINE_JUDGE
			#else
				#ifdef DBG
					cout << V1 << V2 << V3;
				#endif
			#endif
		}
	template<typename T1, typename T2, typename T3, typename T4>
		inline void deb(const T1 &V1, const T2 &V2, const T3 &V3, const T4 &V4) {
			#ifdef ONLINE_JUDGE
			#else
				#ifdef DBG
					cout << V1 << V2 << V3 << V4;
				#endif
			#endif
		}
	template<typename T1, typename T2, typename T3, typename T4, typename T5>
		inline void deb(const T1 &V1, const T2 &V2, const T3 &V3, const T4 &V4, const T5 &V5) {
			#ifdef ONLINE_JUDGE
			#else
				#ifdef DBG
					cout << V1 << V2 << V3 << V4 << V5;
				#endif
			#endif
		}


