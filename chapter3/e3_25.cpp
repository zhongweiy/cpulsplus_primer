/*
 * c++ primer exercise 3.25(p125
 *
 * 
 *2011/6/16 23:52:52 
 */
#include <iostream>
#include <vector>
using namespace std;

bool is_equal(const int*ia,int ia_size,const vector<int> &ivec){
	int i = 0;
//	if(ia_size>=ivec.size())
		for(vector<int>::const_iterator it = ivec.begin();(it != ivec.end())&&(i<ia_size); ++it){
			if(ia[i]!=*it)
				return false;
			i++;
		}
		/*
	else
		for(vector<int>::const_iterator it = ivec.begin();i<ia_size; ++it){
			if(ia[i]!=*it)
				return false;
			i++;
		}
		*/
	return true;
}

int main(){
	int ia[5] = {1,2,3,4,5};
	//vector<int> ivec(10,1);
	vector<int> ivec(ia,ia+5);
	cout<<is_equal(ia,5,ivec)<<endl;
	return 0;
}

