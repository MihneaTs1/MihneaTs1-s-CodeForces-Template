#if defined(__clang__)
#pragma clang optimize "Ofast"
#pragma clang optimize "unroll-loops"
#else
#pragma GCC optimize("Ofast,unroll-loops")
#endif

#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);\
                               cin.tie(nullptr);\
                 			  cout.tie(nullptr);
using namespace std;

#define int int64_t 
#define YES cout<<"YES"    
#define YESn cout<<"YES\n" 
#define NO cout<<"NO"     
#define NOn cout<<"NO\n"       

#define MORE_TESTS 1      
#define FASTIO 1     
int32_t TESTCASE_COUNT = 1, TESTCASE;

void Solve ()
{
	
}

/*

*/

int32_t main ()
{
    #if FASTIO == 1
    FastIO;
    #endif
    #if MORE_TESTS == 1
    cin >> TESTCASE_COUNT;
    #endif
    for (TESTCASE = 1; TESTCASE <= TESTCASE_COUNT; TESTCASE ++)
        Solve ();
}

/*
___  ___          _        ______         ___  ____ _                    _____ _         ___  ___
|  \/  |         | |       | ___ \        |  \/  (_) |                  |_   _| |        |  \/  |
| .  . | __ _  __| | ___   | |_/ /_   _   | .  . |_| |__  _ __   ___  __ _| | | |__   ___| .  . | ___   __ _  __ _  ___ _ __
| |\/| |/ _` |/ _` |/ _ \  | ___ \ | | |  | |\/| | | '_ \| '_ \ / _ \/ _` | | | '_ \ / _ \ |\/| |/ _ \ / _` |/ _` |/ _ \ '__|
| |  | | (_| | (_| |  __/  | |_/ / |_| |  | |  | | | | | | | | |  __/ (_| | | | | | |  __/ |  | | (_) | (_| | (_| |  __/ |
\_|  |_/\__,_|\__,_|\___|  \____/ \__, |  \_|  |_/_|_| |_|_| |_|\___|\__,_\_/ |_| |_|\___\_|  |_/\___/ \__, |\__, |\___|_|
                                   __/ |                                                                __/ | __/ |
                                  |___/                                                                |___/ |___/
*/
