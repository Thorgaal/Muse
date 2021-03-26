#pragma once
#include <array>
#include <iostream>
template<typename T, int h,int w>
class Matrix{
    /*
        This class is made for manipulates matrix by summing them, mutipliating them

        parameters:
            private:
                that longueur that is the height of the matrix and largeur that is the width
                an array of array that represent the matrix named param
        mehodes:
                private:
                    None
                public:
                    constructor that take an array and put the valeur of the table in our array parameters
                    getters (that part is obvious I will not explain them in all the docs)
                    setters
    */
    private:
    int hight,width;
    std::array<std::array<T,w>,h> param;
        

    public:
        Matrix(std::array<typename T,int h,int w> matrix){
            hight = h;
            width = w;
            if(matrix.size!=this->hight * this->width);
                for(std::size_t i =0; i<h;i++){ 
                    for(std::size_t j = 0;j<w;j++){
                        param[i][j] = matrix[w*i+j];
                    }
                }
        }
        Matrix width(){
            return this->width;
        }
        Matrix hight(){
            return hight;
        }
        Matrix matrix(){
            return param;
        }

};

template<typename T>
Matrix operator+(Matrix<T> const& a, Matrix<T> const& b){
    if(a.width() != b.width() && a.hight()!=b.hight()){
        throw string("Vous ne pouvez pas ajouter ces deux matrices")
    }
    std::array<T,b.width()*b.hight()> c ;
    for(int i =0;i<a.hight(); i++){
        for(int j= 0; j<a.width();j++){
            c[a.width()*i+j] = a.param[i][j]+b.param[i][j]
        }
    }
}
