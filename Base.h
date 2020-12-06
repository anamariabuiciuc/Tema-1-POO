//
// Created by Ana on 06-Dec-20.
//

#ifndef TEMA2_BASE_H
#define TEMA2_BASE_H


class Base { ///clasa baza in care sunt functiile virtuale

    public:
        virtual bool isBautura() = 0;
        virtual bool isMancare() = 0;
        virtual double timpAlergare() = 0;


};


#endif //TEMA2_BASE_H
