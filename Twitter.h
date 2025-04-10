#ifndef NYEW_HW4_Q1_TWITTER_H
#define NYEW_HW4_Q1_TWITTER_H
#include <iostream>
#include "SocialMediaAccount.h"
using namespace std;
template <class A>
class Twitter: public SocialMediaAccount<A>{
public:
    Twitter(A handler = A(), bool priv=true): SocialMediaAccount<A>(handler, priv){
        retweetCount=0;
    }

    int getRetweet(){
        return retweetCount;
    }

    void getRetweet(int count){
        retweetCount=count;
    }

    void RT(){
        retweetCount++;
    }


private:
    int retweetCount;
};



#endif //NYEW_HW4_Q1_TWITTER_H
