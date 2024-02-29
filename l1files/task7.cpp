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
	int size;
	std::cout << "Please enter the size of the array" << std::endl;
	std::cin >> size;
	const int cnstsize = size;
	int arr[cnstsize];
	std::cout << "Please input the elements of the array" << std::endl;
	for(int i = 0; i < cnstsize; ++i){
		std::cin >> arr[i];
	}

	int userInput = 0;
	do{
		std::cout << "For Bubble_sort enter 1 and for Selection_sort enter 2 ";
		std::cin >> userInput;
	}while(userInput != 1 && userInput != 2);
 
	void(*fptr)(int*, int);
	if(userInput == 1){
		fptr = bubble_sort;
	}else if(userInput == 2){
		fptr = selection_sort;
	}
	fptr(arr, cnstsize);

	
	for(int i = 0; i < cnstsize; ++i){
                std::cout << arr[i] << "  ";
        }
	std::cout << '\n';

}
