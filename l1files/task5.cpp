#include<iostream>
int max(int *arr, size_t size){
	int max = arr[0];
	for(int i = 1; i < size; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int min(int *arr, size_t size){
        int min = arr[0];
        for(int i = 1; i < size; ++i){
                if(arr[i] < min){
                        min = arr[i];
                }
        }
        return min;
}

int average(int *arr, int size){
	int tmp;
	for(int i = 0; i < size; ++i){
		tmp += arr[i];
	}
	return tmp /= size;
}

int strlen(const char *str){
	int count = 0;
	for(int i = 0; str[i] != '\0'; ++i){
		++count;
	}
	return count;
}

char *strcat(const char *arr, const char *carr){
	char *tmp = new char[strlen(arr) + strlen(carr) + 1];		
	int i = 0;
	for(; i <= strlen(arr); ++i){
		tmp[i] = arr[i];
	}
	for(int j = 0; j < strlen(carr); ++j, ++i){
                tmp[i - 1] = carr[j];
        }
	tmp[i + 1] = '\0';
	return tmp;

}


int main()
{
	/*int a;
	std::cin >> a;
	int *arr = new int[a];
	for(int i = 0; i < a; ++i){
		std::cin >> arr[i];
	}
	delete []arr;
	*/
	
}
