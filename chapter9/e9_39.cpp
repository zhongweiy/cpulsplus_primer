#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    string line1 = "We were her pride of 1- she named us:";
    string line2 = "Benjamin, Phoenix, the Prodigal";
    string line3 = "and perspicacious pacific Suzanne";

    string sentence = line1 + ' ' + line2 + ' ' + line3;
    int word_count = 0;
    int word_len = 0;
    int max_word_len = 0;
    int min_word_len = 10000;
    string max_len_word;
    string min_len_word;

    for (string::size_type i = 0;
            i != sentence.size(); ++i) {
        if (isalpha(sentence[i]))
            ++word_len;
        else if(isalpha(sentence[i - 1])) { 
            if (max_word_len < word_len) {
                max_word_len = word_len;
                max_len_word = 
                    sentence.substr(i - max_word_len, max_word_len);
            } else if (max_word_len == word_len) 
                max_len_word += ", " + 
                    sentence.substr(i - max_word_len, max_word_len);
            else if (min_word_len > word_len) {
                min_word_len = word_len;
                min_len_word = 
                    sentence.substr(i - min_word_len, min_word_len);
            } else if (min_word_len == word_len) 
                min_len_word += ", " +
                    sentence.substr(i - min_word_len, min_word_len);
            word_len = 0;
            ++word_count;
        }
    }
    ++word_count;

    cout << "\nmax word length is: " << max_word_len
        << "\nmax word are: " << max_len_word
        << "\nmin word length is: " << min_word_len
        << "\nmin word are: " << min_len_word 
        << "\nword count is: " << word_count << endl;

    return 0;
}
