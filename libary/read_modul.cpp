#include <iostream>
int loadDataFromTxtToArr(FILE *filein, int *&arr){
    bool error_flag = 0;
    if (filein==NULL){
        std::cout << "Get error when open your file" << std::endl;
        error_flag = 1;
    }
    int n;
    if (fscanf(filein, "%d", &n)==EOF){
        std::cout<<"Get error when read your file"<<std::endl;
        error_flag = 1;
    }
    arr = new int[n];
    if (arr==NULL){
        std::cout<<"Get error when declare the array"<<std::endl;
        error_flag = 1;
    }
    if (error_flag==1)
        return 0;
    int i = 0;
    while (!feof(filein)){
        fscanf(filein, "%d", arr + i++);
    }
    fclose(filein);
    return n;
}

int loadDataFromTxtToArr_NoElement(FILE *filein, int *&arr){
    bool error_flag = 0;
    if (filein==NULL){
        std::cout << "Get error when open your file" << std::endl;
        error_flag = 1;
    }
    int n=0;
    int tempValue;
    while (fscanf(filein, "%d", &tempValue)!=EOF){
        n++;
    }
    arr = new int[n];
    if (arr==NULL){
        std::cout<<"Get error when declare the array"<<std::endl;
        error_flag = 1;
    }
    if (error_flag == 1)
        return 0;
    int i = 0;
    rewind(filein);
    int i = 0;
    while (!feof(filein))
    {
        fscanf(filein, "%d", arr + i++);
    }
    fclose(filein);
    return n;
}