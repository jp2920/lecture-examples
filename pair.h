#ifndef PAIR_H
#define PAIR_H

template <class T1, class T2> 

class Pair {
    private:
        T1 _first; 
        T2 _second;
    public: 
        Pair(T1 first, T1 second) :
            _first(first), 
            _second(second) {}
};



#endif
