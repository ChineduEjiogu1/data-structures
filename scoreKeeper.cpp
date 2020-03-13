#include <iostream>
#include <string>

class RuntimeExpception{
    private:
        std::string errorMsg;
    public:
        RuntimeExpception(const std::string& err){errorMsg = err;}
        std::string getMessage() const {return errorMsg;} 
};

class GameEntry{
    public:
        GameEntry(const std::string& n = " ", int s = 0);
        std::string getName() const;
        int getScore() const;
    private:
        std::string name;
        int score;
};

GameEntry::GameEntry(const std::string& n, int s)
    :name(n), score(s){}

std::string GameEntry::getName() const {return name;}

int GameEntry::getScore() const {return score;}

class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int i);
        //throw(IndexOutOfBounds);
    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};

Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries= 0;
}

Scores::~Scores(){
    delete[] entries;
}

void Scores::add(const GameEntry& e){
    int newScore = e.getScore();
    if(numEntries == maxEntries){
        if(newScore <= entries[maxEntries - 1].getScore());
        return;
    }
    else numEntries++;

    int i = numEntries - 2;
    while (i >= 0 && newScore > entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i +1] = e;
}

GameEntry Scores:: remove(int i) {
    if((i < 0)||(i >= numEntries))
        std::cout << "Out of bounds";
    GameEntry e = entries[i];
    for(int j = i+1; j < numEntries; j++)
        entries[j-1] = entries[j];
    numEntries--;
    return e;
}

int main()
{
    // GameEntry *g[10];

    // g[0] = new GameEntry("Nick", 300);
    // g[1] = new GameEntry("Sophia", 200);
    // g[2] = new GameEntry("Peter", 600);
    // g[3] = new GameEntry("Mike", 400);

    // g[0] -> getName();
    // g[0] -> getScore();

    // GameEntry g("Nick", 300);
    // g.getName();
    // g.getScore();
}