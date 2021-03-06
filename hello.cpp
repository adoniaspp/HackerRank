#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int laco()
{
    const double inch = 2.54;
    auto length = 1;
    while (length != 0)
    {
        cout << "Entre com o tamanho em inch: ";
        cin >> length;
        cout << inch * length;
    }
}

int condicionais()
{
    const double cm = 2.25;
    int val;
    char unit;
    while (cin >> val >> unit)
    {
        if (unit == 'i')
        {
            cout << val << val * cm << '\n';
        }
        else if (unit == 'c')
        {
            cout << val << val / cm << '\n';
        }
        else
        {
            return 0;
        }
    }
}

void loopFor()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i + '\t' << sqrt(i) << '\n';
    }
}

void vetores()
{
    vector<double> temps;
    vector<int> v = {1, 2, 3, 4, 4, 5};
    vector<string> palavras;
    double temp;
    while (cin >> temp)
    {
        temps.push_back(temp);
    }
    for (int i = 0; i < temps.size(); i++)
    {
        cout << temps[i];
    }
    for (int i : temps)
    {
        cout << i;
    }
    sort(v.begin(), v.end());
}

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> rating(2);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            rating[0] += 1;
        }
        else if (a[i] < b[i])
        {
            rating[1] += 1;
        }
    }
    return rating;
}

long aVeryBigSum(vector<long> ar)
{
    long result = 0;
    for (long el : ar)
    {
        result += el;
    }
    return result;
}

int simpleArraySum(vector<int> ar)
{
    int result = 0;
    for (int num : ar)
    {
        result += num;
    }
    return result;
}

int diagonalDifference(vector<vector<int>> arr)
{
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int diferencaDiagonal = 0;
    for (int l = 0; l < arr.size(); l++)
    {
        for (int c = 0; c < arr.size(); c++)
        {
            if (l == c)
            {
                somaDiagonalPrincipal += arr[l][c];
            }
            if (l + c == arr.size() - 1)
            {
                somaDiagonalSecundaria += arr[l][c];
            }
        }
    }
    diferencaDiagonal = abs(somaDiagonalPrincipal - somaDiagonalSecundaria);
    return diferencaDiagonal;
}

void plusMinus(vector<int> arr)
{
    float fracaoPositivos = 0.0;
    float fracaoNegativos = 0.0;
    float fracaoZero = 0.0;
    for (int num : arr)
    {
        if (num > 0)
        {
            fracaoPositivos += 1;
        }
        else if (num < 0)
        {
            fracaoNegativos += 1;
        }
        else
        {
            fracaoZero += 1;
        }
    }
    cout << fracaoPositivos / (arr.size()) << '\n';
    cout << fracaoNegativos / (arr.size()) << '\n';
    cout << fracaoZero / (arr.size()) << '\n';
}

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (j > i)
            {
                cout << ' ';
            }
            else
            {
                cout << '#';
            }
        }
        cout << '\n';
    }
}

int sockMerchant(int n, vector<int> ar)
{
    vector<int> socksPair;
    int pairs = 0;
    bool checkPair;

    for (int sock : ar)
    {
        checkPair = false;
        if (socksPair.empty())
        {
            socksPair.push_back(sock);
        }
        else
        {
            for (int i = 0; i < socksPair.size(); i++)
            {
                if (sock == socksPair[i])
                {
                    socksPair.erase(socksPair.begin() + i);
                    pairs += 1;
                    checkPair = true;
                    break;
                }
            }
            if (!checkPair)
            {
                socksPair.push_back(sock);
            }
        }
    }
    return pairs;
}

int countingValleys(int n, string s)
{

    int seaLevel = 0;
    int countValley = 0;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'U':
            seaLevel++;
            break;
        case 'D':
            if (seaLevel == 0)
            {
                countValley += 1;
            }
            seaLevel--;
            break;
        default:
            break;
        }
    }
    return countValley;
}

int jumpingOnClouds(vector<int> c)
{
    int i = 0;
    int saltos = 0;
    bool saltou = false;

    while (i < (c.size()-1))
    {
        saltou = false;
        if (!(i + 2 >= c.size()))
        {
            if (c[i + 2] == 0)
            {
                i += 2;
                saltos += 1;
                saltou = true;
            }
        }
        if (!(i + 1 >= c.size()) && !saltou)
        {
            i += 1;
            saltos += 1;
        }
    }
    return saltos;
}

int repeatedString(string s, long n)
{
    string r;
    int j = 0;
    int count = 0;
    int sizeS = s.length()-1;
    for(int i=0; i<n; i++)
    {  
        if(j == sizeS){
            j = 0;
        }
        if(s[j] == 'a'){
            count++;
        }
        j++;
    }
    return count;
}

int main()
{
    /*cout << "Por favor entre com seu primeiro e segundo nome:\n";
    string nome;
    string sobrenome;
    double idade;
    
    cin >> nome >> sobrenome;
    nome += "2";
    cout << "Entre com a idade: ";
    cin >> idade;
    idade = sqrt(idade);
    cout << "Olá " + nome + ' ' + sobrenome + '\n';
    cout << "Sua idade é " << idade << '\n';
    laco();*/
    //vetores();
    /*vector<int> a = {5,6,7};
    vector<int> b = {3,6,10};
    vector<long> c = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    vector<int> result  = compareTriplets(a, b);
    for(int x : result){
        cout << x << ' ';
    }
    cout << aVeryBigSum(c);*/
    /*vector<vector<int>> arr = {{11,2,4},{4,5,6},{10,8,-12}};
    cout << diagonalDifference(arr) << '\n';
    vector<int> arr = {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);*/
    //staircase(6);
    //cout << sockMerchant(9, {10, 20, 20, 10, 10, 30, 50, 10, 20});
    //cout << countingValleys(8, "UDDDUDUU");
    //cout << jumpingOnClouds({0, 0, 0, 0, 1, 0});
    cout << repeatedString("aba", 10);
    return 0;
}
