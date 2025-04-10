#ifndef NYEW_HW4_Q1_INSTAGRAM_H
#define NYEW_HW4_Q1_INSTAGRAM_H

#include "SocialMediaAccount.h"

 template <class A>
 class instagram: public SocialMediaAccount<A>{
public:
    instagram(A handler =A(), bool priv= true): SocialMediaAccount<A>(handler, priv){
        likes=0;
    }

    int getlikes(){
        return likes;
    }

    void like(){
        likes++;
    }




private:
    int likes;
};


#endif //NYEW_HW4_Q1_INSTAGRAM_H
