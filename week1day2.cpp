class organism {
    int age = (rand() % 100);
    // https://www.simplilearn.com/tutorials/cpp-tutorial/random-number-generator-in-cpp
    string name = NULL;
    bool isAlive = TRUE; 

    bool operator< (organism& temporganism){
    if (age < temporganism.age)
        return true;
    else 
        return false;
};

};

class population {
    vector<organism> popvec(20);
    for ( int i = 0; i < 20; i++ ) {
        popvec.push_back(organism);
    };
    sort(popvec.begin(), popvec.end())
};




