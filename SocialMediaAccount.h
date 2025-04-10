#ifndef NYEW_HW4_Q1_SOCIALMEDIAACCOUNT_H
#define NYEW_HW4_Q1_SOCIALMEDIAACCOUNT_H

#include <iostream>
using namespace std;
//const global, size of array
const int maxFollowers= 100;
const int maxFollowed=100;
template <class A>
class SocialMediaAccount{
public:
    SocialMediaAccount(A handle=A(), bool privAcc=true);

    A getHandler();
    void setHandler(A h);
   int getFollowers(){return followerCount;}
   int getFollowed(){return followedCount;}
   void setFollowers(int followers){followerCount=followers;}
   bool isPriv();
   void setPriv(bool p);

   void displayFollowers();
   void displayFollowed();

   void addFollower(A user);
   void addFollowed(A user);


private:
    A handler,followers[maxFollowers], followed[maxFollowed];
int followerCount, followedCount;
bool privAcc;

};
#include "SocialMediaAccount.cpp"
#endif //NYEW_HW4_Q1_SOCIALMEDIAACCOUNT_H
