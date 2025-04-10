#include <iostream>
#include "SocialMediaAccount.h"
using namespace std;
template <class A>
SocialMediaAccount<A>::SocialMediaAccount(A handle, bool isPriv){
    handler=handle;
    privAcc=isPriv;
    followedCount=0;
    followerCount=0;
}

template <class A>
A SocialMediaAccount<A>::getHandler() {
    return handler;
}
template <class A>
 void SocialMediaAccount<A>::setHandler(A h) {
    handler=h;
}


template <class A>
void SocialMediaAccount<A>::setPriv(bool p) {
    privAcc=p;
}
template <class A>
bool SocialMediaAccount<A>::isPriv() {
    return privAcc;
}

template <class A>
void SocialMediaAccount<A>::addFollowed(A user) {
    if(followedCount<maxFollowed){
        followed[followedCount++]=user;
    }else{
        cout << "Followed list is full"<<endl;
    }
}

template <class A>
void SocialMediaAccount<A>::addFollower(A user) {
    if(followerCount<maxFollowers){
        followers[followerCount++]=user;
    }else{
        cout << "Follower list is full"<<endl;
    }
}

template <class A>
void SocialMediaAccount<A>::displayFollowed() {
    if(!privAcc){
        cout<< handler<<" is Followed by: "<<endl;
        for(int i=0;i<followedCount;i++){
            cout<<followed[i]<< endl;
        }
    }else{
        cout << "This account is private, cant display followed"<< endl;
    }
}

template <class A>
void SocialMediaAccount<A>::displayFollowers() {
    if(!privAcc){
        cout<< handler <<"'s Followers: "<<endl;
        for(int i=0;i<followerCount;i++){
            cout<<followers[i]<< endl;
        }
    }else{
        cout << "This account is private, cant display followers"<< endl;
    }
}

