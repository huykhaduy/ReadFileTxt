#include "./libary/read_modul.cpp"

int main(){

    /* Đọc file có số lượng phần tử*/

    int *arr;
    FILE *filein = fopen("data.txt", "r");
    
    int n = loadDataFromTxtToArr(filein, arr);
    
    for (int i=0; i<n; i++){
        std::cout << arr[i]<<" ";
    }

    std::cout << std::endl;
    /* Đọc file không có số lượng phần tử*/

    int *arr2;
    FILE *filein2 = fopen("data-no-element.txt", "r");
    int n2 = loadDataFromTxtToArr_NoElement(filein2, arr2);
    for (int i=0; i<n2; i++){
        std::cout << arr2[i]<<" ";
    }
}