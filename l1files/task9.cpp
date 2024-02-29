#include<iostream>

void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
}

void bubble_sort(int *arr, int size){
        bool flag = true;
        for(int i = 0; i < size - 1; ++i){
                for(int j = 0; j < size - i - 1; ++j){
                         if(arr[j] > arr[j + 1]){
                                swap(arr[j], arr[j + 1]);
                                flag = false;
                         }
                }
                if(flag){
                        break;
                }
        }
}


void selection_sort(int *arr, int size){
        int i = 0;
        int j = 0;
        int min_ind = 0;
        for(int i = 0; i < size - 1; ++i){
                min_ind = i;
                for(j = i + 1; j < size; ++j )
                        if(arr[j] < arr[min_ind]){
                                min_ind = j;
                }
                if(min_ind != i){
                        swap(arr[i], arr[min_ind]);
                }
        }
}


int main()
{
	int iarr[] = {1, 5, -5, 6, 0, 8};
	
	enum SortingStrategy{
		BUBBLE_SORT,
		SELECTION_SORT,
	};

	struct SortingOption{
		SortingStrategy ob;
		void(*fptr)(int *arr, int size);
	};

	SortingOption arr[2];
	for(int i = 0; i < 2; ++i){
		arr[i].ob = (SortingStrategy)i;
		arr[BUBBLE_SORT].fptr = bubble_sort;
		arr[SELECTION_SORT].fptr = selection_sort;
	}
	int input = -1;
	std::cout << "Please enter 0 for BUBBLE_SORT and 1 for SELECTION_SORT  ";
	std::cin >> input;
	arr[input].fptr(iarr, 6);
	for(int i = 0; i < 6; ++i){
		std::cout << iarr[i] << " ";
	}


}
