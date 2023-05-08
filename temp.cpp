/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:02:05 by obelaizi          #+#    #+#             */
/*   Updated: 2023/05/08 18:04:35 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

# define 	prnt_int	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
# define	ll	long long
# define	ull         unsigned long long
# define 	yesOrno(x) 	cout << (x? "YES\n": "NO\n")
# define	intcin(x)	for(int& a : x) cin >> a;
# define	gcd(a, b)	__gcd(a, b)
# define 	all(v)		v.begin(), v.end() 

typedef vector<int> vi;
typedef vector<ull> vull;
typedef vector<ll> vll;
 
void n(){
    cout<<"NO"<<endl;
}

void y(){
    cout<<"YES"<<endl;
}

ull     fact(ull n)
{
    ull res = 1;
    
    while (n--) res *= (n + 1);
    return (res);
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool isPalin(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1]) 
		 return false;
    return true;
}

void    solve()
{

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int     cases;
	// cases = 1;
    cin >> cases;
    while (cases--) solve();
    return (0);	    
}
