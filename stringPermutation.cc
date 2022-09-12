#include <iostream>

using namespace std;

bool checkEqual(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};
    int i = 0;

    // check for first window
    while (i < s1.length())
    {
        int index = s1[i] - 'a';
        count1[index]++;

        i++;
    }

    i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;

        i++;
    }

    if (checkEqual(count1, count2))
        return true;

    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return 1;
    }

    return 0;
}

int main()
{

    string s1 = "ab";
    string s2 = "eidbaooo";
    string s4 = "eidboaoo";
    string s3 = "ab";

    cout << checkInclusion(s1, s2) << endl;
    cout << checkInclusion(s3,s4);

    return 0;
}