#include <iostream>
int loadDataFromTxtToArr(FILE *filein, int *&arr){
    if (filein==NULL){
        std::cout << "Get error when open your file" << std::endl;
        return 0;
    }
    int n;
    if (fscanf(filein, "%d", &n)==EOF){
        std::cout<<"Get error when read your file"<<std::endl;
        return 0;
    }
    arr = new int[n];
    if (arr==NULL){
        std::cout<<"Get error when declare the array"<<std::endl;
    }
    int i = 0;
    while (!feof(filein)){
        fscanf(filein, "%d", arr + i++);
    }
    fclose(filein);
    return n;
}

int loadDataFromTxtToArr_NoElement(FILE *filein, int *&arr){
    if (filein==NULL){
        std::cout << "Get error when open your file" << std::endl;
        return 0;
    }
    int n=0;
    int tempValue;
    while (fscanf(filein, "%d", &tempValue)!=EOF){
        n++;
    }
    arr = new int[n];
    if (arr==NULL){
        std::cout<<"Get error when declare the array"<<std::endl;
    }
    rewind(filein);
    int i = 0;
    while (!feof(filein))
    {
        fscanf(filein, "%d", arr + i++);
    }
    fclose(filein);
    return n;
}