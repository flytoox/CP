/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:02:05 by obelaizi          #+#    #+#             */
/*   Updated: 2023/03/17 22:41:44 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include               <iostream>
# include               <algorithm>
# include				<iterator>
# include               <vector>
# include               <string>
# include               <map>
# include               <unordered_map>
# include               <set>
# include               <unordered_set>
# include               <bitset>
# include               <queue>
# include               <stack>
# include               <complex>
# include               <cmath>
# include               <climits>
# include               <cstring>
using namespace std;

# define 	prnt_int 			copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
# define    ll          long long
# define    ull         unsigned long long
#define 	yesOrno(x) 	cout << (x? "YES\n": "NO\n")
# define	intcin(x)	for(int& a : x) cin >> a;

typedef vector<int> vi;
typedef vector<ull> vull;
typedef vector<ll> vll;
 
 
ull     fact(ull n)
{
    ull res = 1;
    
    while (n--) res *= (n + 1);
    return (res);
}
 
 
 
int get_max (int x1, int x2, int x3)
{
	if (x1 > x2 && x1 > x3)
		return (x1);
	else if (x2 > 1 && x2 > x3)
		return (x2);
	else
		return (x3);
}
 
 
int get_min (int x1, int x2, int x3)
{
	if (x1 < x2 && x1 < x3)
		return (x1);
	else if (x2 < 1 && x2 < x3)
		return (x2);
	else
		return (x3);
}

void    solve()
{

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int     cases;
    cin >> cases;
    while (cases--) solve();
    return (0);	    
}