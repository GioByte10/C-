#include <cstdio>
#define N 4

int chooseProposer(int acceptorPreferences[][N], int acceptor, int current, int prospective){
    for(int i = 0; i < N; i++){
        if(acceptorPreferences[acceptor][i] == current)
            return false;

        if(acceptorPreferences[acceptor][i] == prospective)
            return true;
    }
}

int main(){

    int proposerPreferences[N][N] = {
//        {3, 1, 2, 0},
//        {1, 0, 2, 3},
//        {0, 1, 2, 3},
//        {0, 1, 2, 3},

        {1, 0, 2, 3},
        {3, 0, 1, 2},
        {0, 2, 1, 3},
        {1, 2, 0, 3},

    };



    int acceptorPreferences[N][N] = {
//        {0, 1, 2, 3},
//        {0, 1, 2, 3},
//        {0, 1, 2, 3},
//        {0, 1, 2, 3},

        {0, 2, 1, 3},
        {2, 3, 0, 1},
        {3, 1, 2, 0},
        {2, 1, 0, 3},
    };

    int matches[N] = {};
    bool matched[N] = {};
    int freeCount = N;

    while(freeCount){

        for(int i = 0; i < N; i++) {
            for(int p = 0; p < N; p++) {
                if(matched[p]) continue;

                int proposeTo = proposerPreferences[p][i];

                if(!matches[proposeTo]) {
                    matches[proposeTo] = p + 1;
                    matched[p] = true;
                    freeCount--;
                }

                else if(chooseProposer(acceptorPreferences, proposeTo, matches[proposeTo], p)) {
                    matched[matches[proposeTo] - 1] = false;
                    matches[proposeTo] = p + 1;
                    matched[p] = true;
                }
            }
        }
    }

    printf("Acceptor  Proposer\n");
    for(int i = 0; i < N; i++){
        printf("   %d          %d\n", i + 1, matches[i]);
    }

    return 0;
}