#include <iostream>
#include <string>

std::string reverseVowels(std::string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        // find next vowel from left
        while (left < right &&
               !(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'||
                 s[left]=='A'||s[left]=='E'||s[left]=='I'||s[left]=='O'||s[left]=='U')) {
            left++;
        }

        // find next vowel from right
        while (left < right &&
               !(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'||
                 s[right]=='A'||s[right]=='E'||s[right]=='I'||s[right]=='O'||s[right]=='U')) {
            right--;
        }

        // swap vowels manually
        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }

    return s;
}


std::string reverse(const std::string& s) {
    std::string result;
    int i = s.size() - 1;

    while (i >= 0) {
        if (s[i] == '\\' && i > 0) {
            // handle escape sequence \x
            result += s[i];
            result += s[i+1];   // include the escape character
            i -= 2;
        } else {
            result += s[i];
            i--;
        }
    }

    return result;
}



int main(void) {
    std::string s("01 - 40\n:sArutciL\n)2.11 retpihC( sceseB ratneoP ,)7.21 ,6.21(sritcoV ,)7 ratpehC( syurri ,)6-ritpohC( snuetcneF ,)5-ratpahC( spaeL ,)4-ritpehC( sgnertS dne sratcurihC\n:sratpohC kiubtxeT\n)doksa ab llaw snuetsioq01( .skrim 01 :skreM lateT\n.setonom 02 raf ,sselCgnarad ,)yedsandiW( 6202/11/20 :ameT & otoD\n.ssalc yedsundiW roa ne 2 zAaQ avehet gnoog ire aw ,ridnamer kceuq e");
    s = reverseVowels(s);
    s = reverse(s);
    std::cout << s << std::endl;
    return 0;
}