#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    char i;
    size_t input_sz(0);
    size_t buffer_sz = 3;
    char *buffer =  new char[buffer_sz];
    
    cout << "input some string:" << endl;

    while (cin >> i) {
        ++input_sz;
        if (input_sz <= buffer_sz)
            *(buffer + input_sz - 1) = i;
        else {
            /*enlarge the buffer to double size,
             * and copy the old data to new buffer
             */
            char *old_buffer = buffer;
            size_t old_buffer_sz = buffer_sz;
            buffer_sz += buffer_sz;
            buffer = new char[buffer_sz];

            for (char *pbegin1 = buffer, *pbegin2 = old_buffer;
                    pbegin2 != old_buffer + old_buffer_sz;
                    ++pbegin1, ++pbegin2)
                *pbegin1 = *pbegin2;

            *(buffer + old_buffer_sz) = i;
            delete [] old_buffer;
        }
    }

    *(buffer + buffer_sz) = '\0';
    cout << buffer << endl;
    
    delete [] buffer;
    return 0;
}
