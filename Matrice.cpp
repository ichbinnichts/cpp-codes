#include <iostream>
#include <new>

int main(){
	int linha = 5;
	int coluna = 5;
	int ** mat = new int*[linha];
	for(int i = 0;i<linha;i++){
		mat[i] = new int[coluna];
	}
	for(int i = 0;i< linha;i++){
		for(int j = 0; j< coluna;j++){
			mat[i][j] = 10; 
		}
	}
	for(int i = 0;i< linha;i++){
		for(int j = 0; j< coluna;j++){
			std::cout << mat[i][j];
			std::cout << " ";
		}
		std::cout << "\n" << std::endl;
	}
	return 0;
}
