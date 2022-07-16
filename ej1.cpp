/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej1.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:20:44 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 18:38:07 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
using namespace std;

const int N = 10;
typedef array<int, N> TFreqs;

TFreqs freqsOf(string s, TFreqs f);
void printFreqs(TFreqs f);

int main(){
    string s = "1 8 7 3 4 8 0 0 4 8 4 5 3 2 8";
    TFreqs a;
    printFreqs(freqsOf(s, a));
    return 0;
}

TFreqs freqsOf(string s, TFreqs f){
    int n;
    for (int i = 0; i < int(f.size()); i++)
    {
        f[i] = 0;
    }
    
    for (int i = 0; i < int(s.size()); i++)
    {
        n = (s[i] - '0');
        if(n >= 0){
            f[n] += 1;
        }
    }

    return f;
}

 void printFreqs(TFreqs f){
    for (int i = 0; i < N; i++)
    {
        cout << i << ":" << f[i] << " ";
    }
}