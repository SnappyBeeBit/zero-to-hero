#include <stdio.h> 

// Global Scope
int g_NumPersons = 0; //avoid global scope because it's hard to track

void some_other_function () {
    int personId = 1;
}

int main() {
    int personId = 0;
    personId += 1;
    {
        int personId = 0;
        personId += 1;
    }
    return 0;
}