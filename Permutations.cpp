#include <iostream>
#include <vector>

using namespace std;

void PermutationHelper(int start,vector<int>* orig,vector<vector<int> >* result)
{
	if(start == orig->size())
	{
		result->push_back(*orig);
		for(int i=0; i<orig->size(); i++)
		{
			cout << (*orig)[i] << "\t";
		}
		cout << endl;

	}
	else
	{
		for(int i=start; i< orig->size();i++)
		{
			swap((*orig)[i],(*orig)[start]);
			PermutationHelper(start+1,orig,result);
			swap((*orig)[start],(*orig)[i]);
		}
	}

	
}


int main()
{
	int arr[] = {1,2,3,4};
	vector<int> v(arr,arr+4);
	vector<vector<int> > result;
	

	PermutationHelper(0,&v,&result);
}