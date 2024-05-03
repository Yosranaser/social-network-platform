#ifndef OUR_WORLD_STACK_H_INCLUDED
#define OUR_WORLD_STACK_H_INCLUDED


#include<iostream>
#include<fstream>

using namespace std;
 string data_friends[100];
 //fstream fmessage ;
//fstream fout;
fstream fin;
fstream message;
fstream notification;
int following_numbers;
int *cou_ptr=&following_numbers;
string *ptr=&data_friends[0];
#define stack_size 5
template<class data_type>
class STACK
{
private:
public:
    int top;
data_type data[stack_size];
  STACK(){
  top=-1;
}

bool Is_empty(){
 if (top==-1)

    return true;
 else
        return false;

 }
 bool Is_Full(){
  if (top==stack_size-1)
         return true;
  else
        return false;

 }
 void push(data_type var){
 if (Is_Full())
    cout<<"the stack is full"<<endl;
    else
    {top++;
    data[top]=var;
    }
 }
 string pop(){
  if (Is_empty())
    cout<<"the stack is empty"<<endl;
    else
    {
      string poped_value=top_data();
    top--;
    return poped_value;
    }}
 void show_content(){
 if (Is_empty())
     cout<<"the stack is empty"<<endl;
        else
            for(int i=top;i>=0;i--)
            cout<<data[i]<<endl;
      }
void show_content_w_follow(string user_name){
int no_post=0;
int ind=0;
int post_words=0;
string post[50][10];
char follow_choise;
char show_following;
int following_numbers=0;
string data_friends[100];
//string *ptr=&data_friends[0];
//int *cou_ptr=&following_numbers;
      if (Is_empty())
      cout<<"the stack is empty"<<endl;
        else
           {int k=0;
            for(int i=top;i>=0;i--)
            { if(data[i]!=user_name)
            {cout<<data[i] <<"   follow? (Y/N) "<<endl;
            cin>>follow_choise;
            if(follow_choise=='Y')
            {
                data_friends[k]=data[i];
                k++;
            following_numbers++;}
            else {continue;}}
            else {continue;}}
            cout<<"show your following (Y/N) "<<endl;
            cin>>show_following;
            if(show_following=='Y')
            {for(int j=0;j<following_numbers;j++)
            {cout<<data_friends[j]<<endl;}}
            else{}}

              for(int j=0;j<following_numbers;j++)
            { cout<<data_friends[j]<< " message(Y/N)"<<endl;
              cin>>show_following;
              if(show_following=='Y'){
                                       message<<user_name<<"->"<<data_friends[j]<<": ";
                                       notification<<user_name <<" sent message to "<<data_friends[j]<<endl;
                                       cout<<"enter your message"<<endl;
                                       for(int c=0;c<50;c++)
                                       {cin>>post[c][0];
                                       message<<post[c][0]<< " " ;
                                       post_words++;
                                       if(post[c][0]=="send")
                                       {break;}
                                       else{continue;}
                                       }message<<endl;
    message<<"***************************************************"<<endl;
    cout<<"your message has  been sucessfully sent"<<endl;}}}

/***************************************************/
data_type top_data()
      {return data[top];}




};

#endif // OUR_WORLD_STACK_H_INCLUDED

