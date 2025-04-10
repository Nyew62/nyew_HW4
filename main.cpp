/*************************************************************************
** Author : A'Nyla Weathers
** Program : hw4, q1
** Date Created : April 8, 2025
** Date Last Modified : April 9, 2025
** Usage : No command line arguments
**
** Problem:
displaying different social media accounts using template classes






*************************************************************************/

#include <iostream>
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"
using namespace std;


struct Profile{
    int userid;
    string username;
};
ostream& operator<<(ostream& os, const Profile& p){
    os << "[UserID: "<< p.userid<< ", username: " << p.username<< "]";
    return os;
}





int main() {
SocialMediaAccount<string> u1("Joe",false);
u1.addFollower("billy");
u1.addFollowed("jellybeanss");

u1.displayFollowed();
cout << "**************************************************************"<< endl;
u1.displayFollowers();
cout << "**************************************************************"<< endl;
//insta test
instagram<string> instaU("BadGalRiRi", false);

instaU.addFollowed("Fenty");
instaU.addFollower("AsapRocky");

instaU.like();
instaU.like();

cout << instaU.getHandler()<< " liked "<<instaU.getlikes()<<" posts"<<endl;
cout << "**************************************************************"<< endl;
instaU.displayFollowers();
cout << "**************************************************************"<< endl;
instaU.displayFollowed();
cout << "**************************************************************"<< endl;
Twitter<string> TS("vouge", false);
instagram<string> IS("Billnye", false);
//Twitter
TS.addFollower("HalleBailey");
TS.addFollowed("Tyla");
TS.RT();
TS.RT();
TS.displayFollowers();
cout << "**************************************************************"<< endl;
TS.displayFollowed();
cout << "**************************************************************"<< endl;
TS.getRetweet();
cout << "**************************************************************"<< endl;
//Insta
IS.addFollower("SkyJackson");
IS.addFollowed("StormyReid");
IS.like();
IS.like();

IS.displayFollowed();
cout << "**************************************************************"<< endl;
IS.displayFollowers();
cout << TS.getHandler() << " retweeted "<< TS.getRetweet()<<endl;
cout << "**************************************************************"<< endl;
IS.displayFollowers();
cout << "**************************************************************"<< endl;
IS.displayFollowed();
cout << IS.getHandler()<< " likes "<< IS.getlikes()<< endl;
cout << "**************************************************************"<< endl;
Profile p1={01, "CashMoneyMark"};
Profile p2={02, "Dylannn"};
Profile p3={03, "JonJon"};

Twitter<Profile> TP(p2, false);
instagram<Profile> IP(p3, false);
//twitter
TP.addFollower(p2);
TP.addFollower(p3);
TP.RT();
TP.displayFollowers();
cout << "**************************************************************"<< endl;
TP.displayFollowed();

cout << "**************************************************************"<< endl;
//insta
IP.addFollower(p2);
IP.addFollowed(p3);
IP.like();

IP.displayFollowers();
IP.displayFollowed();
cout << "like count:  "<< IP.getlikes()<<endl;
cout << "**************************************************************"<< endl;
    return 0;
}

