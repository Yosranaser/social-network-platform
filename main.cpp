#include <iostream>
#include <string.h>
#include "our_world_stack.h"
#include "our_world.h"
#include<fstream>
string user_name;
//fin.open("postnada.txt");
int main()
{ int pass;
STACK<char> pass_char;
notification.open("notification.txt");
fin.open("HOME.txt");
message.open("messages.txt");
fin<<"                             HOME"<<endl;
int user_first_choise;
int no_post=0;
int ind=0;
int post_words=0;
string post[50][10];
  STACK<string> stk_obj_;
  STACK<int> STA_PASS;
  cout<<"                                                           --------------------------------"<<endl;
  cout<<"                                                         |       WELCOME TO OUR WORLD       |"<<endl;
  cout<<"                                                             --------------------------------"<<endl;
  start:cout<<"1-sign up "<<endl;
  cout<<"2-login    "<<endl;
  cout<<"1 or 2?"<<endl;
  cin>>user_first_choise;
  switch(user_first_choise)
  { case 1:
     {
      string user_name=signUp(stk_obj_,STA_PASS);
      {stk_obj_.push(user_name);
     STA_PASS.push(sign_up_password(pass_char));
      }
       cout << "Sign up successful. Welcome" << "!" << endl;
       goto start;}
      break;
 case 2:
 {  int login_out;
    login_out=login(stk_obj_,STA_PASS);
    switch (login_out)
       {
      post_1:  case 5:
    {
     post_words=0;
     string post[50][10];
     cout<<"Enter your post"<<endl;
     fin<<"  ****"<<endl;
     fin<<"  *   *"<<stk_obj_.top_data()<<endl;
     fin<<"  ****"<<endl;
     for(int c=0;c<50;c++)
     {cin>>post[c][0];
     fin<<post[c][0]<< " " ;
     post_words++;
     if(post[c][0]=="post")
     {break;}
     else{continue;}}


    fin<<endl;
    fin<<"***************************************************"<<endl;
    cout<<"your post has sucessfully post"<<endl;
    notification<<user_name <<" has create a post "<<endl;
     switch(home_fun(stk_obj_,user_name))
     {
     case 5:
        goto post_1;
        break;
        case 6:  goto start; break;}}
 break;
case 0:    goto start;
           break;
case 6 :  goto start; break;
case 3 :  goto start; break;
 default : cout<<"Invalied choise"<<endl; break;}}
  break;}
  fin.close();
    return 0;
}

