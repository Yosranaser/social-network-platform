#ifndef OUR_WORLD_H_INCLUDED
#define OUR_WORLD_H_INCLUDED
#include<fstream>
#include <string>
#include <conio.h>
fstream fout;
//fstream message;
//fstream fin;
int *index;
int user_choises_after_login(STACK<string> stk_obj_,string user_name);

/***********************function to check if user_name is orleady exit**************/
int searchInStack(string item, STACK<string> &STK){int ouput;int *index= &STK.top;
 if (STK.Is_empty())
    {cout<<"the stack is empty no element to search"<<endl;}
 else
     { for(int i=STK.top;i>=0;i--)
     {if(item==STK.data[i])
       {ouput=1;
       //*index=&STK.top;
       }
     else{/*NOTHING*/}
     }}
     if(ouput==1){
     return 1;}
     else{return 0;}
             }
/***************************************************************************************/
int home_fun(STACK<string> stk_obj_,string user_name)
             {
              again: cout<<"                  *********************************************************************"<<endl;
              cout<<"                         *1-Home                                                             *"<<endl;
              cout<<"                         *2-show people who have accounts on this app or show your following *"<<endl;
              cout<<"                         *3-send message to everyone                                                    *"<<endl;
              cout<<"                         *4-notification                                                     *"<<endl;
              cout<<"                         *5-add post                                                         *"<<endl;

              cout<<"                         *6-log out                                                          *"<<endl;
              cout<<"                         *********************************************************************"<<endl;

              int return_val=user_choises_after_login(stk_obj_,user_name);
              if(return_val==2 ||return_val==4 ||return_val==1)
              {goto again;}
              else
               {return return_val;}
             }
 /******************search_in numeric_stack*****************/
 int searchInStack_num(int item, STACK<int> STK){int ouput;
 if (STK.Is_empty())
    {cout<<"the stack is empty no element to search"<<endl;}
 else
     { for(int i=STK.top;i>=0;i--)
     {if(item==STK.data[i])
       {ouput=1;
       //*index=&STK.top;
       }
     else{/*NOTHING*/}
     }}
     if(ouput==1){
     return 1;}
     else{return 0;}
             }
/***********************function  to allow user to signup**********************************/
string signUp(STACK<string>stk_obj_ ,STACK<int>STA_PASS ) {
     //Check if the username is unique
    string user_name;
    int pass;
    //STACK<string> *STA_PASS;
    line_1: cout << "First Name:";
    cin >>user_name;

        if(!stk_obj_.Is_empty()){
        if(searchInStack(user_name,stk_obj_)==1) {
            cout << "Username already exists. Please choose another one." << endl;
            goto line_1;}
        else{
          return user_name;}
          }
     else {
            return user_name;
     }}
/******************helper function to signup funtion****************************/
         int sign_up_password(STACK<char>pass_char)
         {

           int pass;
           cout << "password:";
           cin>>pass;
           return pass;
         }

/*********************helpfunction to login function***************************/
int user_choises_after_login(STACK<string> stk_obj_,string user_name)
{    int user_choise;
    cout<<"enter your choise"<<endl;
    cin>>user_choise;
    switch(user_choise){
case 1:                               {
    string post[100][10];             fin.close();
                                      fin.open("HOME.txt");
                                      for(int c=0;c<100;c++)
                                       {fin>>post[c][0];

                                       //post_words++;
                                       if(post[c][0]=="response")
                                       {break;}
                                       else if(post[c][0]=="post") {cout<<endl;}
                                       else{cout<<post[c][0]<< " " ;
                                       continue;}
                                       }return 1;}
    break;
case 2:
     stk_obj_.show_content_w_follow(user_name);
     return 2;
    break;
case 3:
{                                      string post[100][10];
                                      // message<<user_name<<"->"<<data_friends[j]<<": ";
                                       //notification<<user_name <<" sent message to "<<data_friends[j]<<endl;
                                       cout<<"enter your message"<<endl;
                                       for(int c=0;c<50;c++)
                                       {cin>>post[c][0];
                                       message<<post[c][0]<< " " ;
                                      // post_words++;
                                       if(post[c][0]=="send")
                                       {break;}
                                       else{continue;}
                                       }message<<endl;
    message<<"***************************************************"<<endl;
    cout<<"your message has  been sucessfully sent"<<endl;}

     return 3;
break;
case 4:
    {    notification.close();
         notification.open("notification.txt");
        string post[100][10];
        for(int c=0;c<100;c++)
      {notification>>post[c][0];

                                       //post_words++;
      if(post[c][0]=="response")
       {break;}
       else if(post[c][0]=="post") {cout<<post[c][0]<< " "<<endl;}
       else{cout<<post[c][0]<< " " ;
       continue;}
      }}
      return 4;
       break;

case 5:
    notification<<user_name <<" has create a post "<<endl;

     return 5;
     break;
case 6:
    return 6;
    break;
default :
    break;
}
}
/*****************function to let user to login****************************/
int login(STACK<string> stk_obj_,STACK<int> STA_PASS) {


string user_name;
int pass;
int c=0;
 char mail_check;
cout<<"login................"<<endl;
line_1: cout <<"First Name:";
    cin >> user_name;
if((searchInStack(user_name,stk_obj_)==1))
    {
           enter_password_again:cout << "password:";
           cin>>pass;
           if(searchInStack_num(pass,STA_PASS)==1)
           {
        again_:cout<<"                        *********************************************************************"<<endl;
              cout<<"                         *1-Home                                                             *"<<endl;
              cout<<"                         *2-show people who have accounts on this app or show your following *"<<endl;
              cout<<"                         *3-send message to everyone                                         *"<<endl;
              cout<<"                         *4-notification                                                     *"<<endl;
              cout<<"                         *5-add post                                                         *"<<endl;
              cout<<"                         *6-log out                                                          *"<<endl;
              cout<<"                         *********************************************************************"<<endl;
             // user_choises_after_login(stk_obj_,user_name);
              int return_val=user_choises_after_login(stk_obj_,user_name);
              if(return_val==2 ||return_val==4 ||return_val==1||return_val==3)
              {goto again_;}
              else
               {return return_val;}
           }
               else{cout<<"password wrong,try again........"<<endl;
               c++;
               if(c<3)
               {goto enter_password_again;}

               else
               {cout<<"send you mail check ?(Y/N)"<<endl;
               cin>>mail_check;
                if(mail_check=='Y')
                    {   fstream mail;
                        mail.open("MAIL.txt");
                        mail<<1474<<endl;
                        int code_check=1474;
                        int entered_code;
                        cout<<" you has recieved check code on mail"<<endl;
                        cout<<" Enter the code:"<<endl;
                        cin>>entered_code;
                        if(entered_code==code_check)
                        { cout<<"correct code"<<endl;
                         goto  again_;
                        }
                        else {cout<<"invalid code_check"<<endl;
                        return 0;/*start*/}}
                  else {return 0;/* start*/}}
               }
               }



else{cout<<"wrong username"<<endl;
return 0; /* start*/
 }
}

/*****************************************************/


#endif // OUR_WORLD_H_INCLUDED
