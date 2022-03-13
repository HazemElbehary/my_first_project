#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    string player_one , player_two ;
    int first_num1=0 , second_num1 =0, first_num2 , second_num2, incremant=0,incremant_two=0;
    
    cout<<"Enter the name of the first player"<<endl;
    cin>>player_one;
    cout<<"Enter the name of the second player"<<endl;
    cin>>player_two;
    cout<<"hello "<< player_one<<endl<<'\n'<<"hello "<< player_two<<endl<<'\n'<<"in this game you have 20 cards and you choose two cards and if the two cards are simaller you will gain one point and if you want to finish tge game write exit."<<endl;
    cout<<"choose two numberfrom:\n{1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0}"<<endl;
    string list[20]={ "1" ,"2" , "3", "4", "5", "6", "7", "8", "9", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };
    string alpha[20]={"a" , "b"  , "c"  , "d"  , "e"  , "f"  , "g"  , "h"  , "i"  , "j"  , "a"  , "b", "c", "d" , "e" ,"f" , "g" ,"h" , "i", "j" };
    int list_two[20]={ 1 ,2 , 3, 4, 5, 6, 7,8, 9, 0,1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int repeat[]={ 99,100,98,97,96,95,94,93,92,91,90,80,81,82,83,84,85,86,87,88};
    string finish="start";
    while (finish != "end")
    {
        cout<<player_one<<" has "<<incremant<<" points"<<endl;
        cout<<player_two<<" has "<<incremant_two<<" points "<<endl;
        //the first player
        int first_num1=0 , second_num1 =0, first_num2 , second_num2, incremant=0,incremant_two=0;
        cout<<player_one<<":"<<'\n'<<"Enter the first number of you:\n";
        cin>>first_num1;
        cout<<player_one<<":"<<'\n'<<"Enter the second number of you:\n";
        cin>>second_num1;
        repeat[first_num1]=first_num1;
        repeat[second_num1]=second_num1;
        int len = sizeof(repeat)/sizeof(repeat[0]);
        for(int i=0;i<=len;i++)
		{
		    if((first_num1==repeat[i] )|| (second_num1 ==repeat[i]))
		   {
		        cout<<"please dont choose repeat number\n";
		    }
		   
		    else
		    {
		        if ((0<=first_num1<=20) && (0<=second_num1<=20) )
		        {
		            if (alpha[first_num1]==alpha[second_num1])
		            {
		                list[first_num1]=alpha[first_num1];
		                list[second_num1]=alpha[second_num1];
		                for(int i=0 ; i<20;i++)
		                {
		                    cout<<list[i]<<" ";
		                }
		                //cout<<list<<endl;
		                cout<<"you win :) "<<endl;
		                incremant=incremant+1;
		                cout<<player_one <<" has "<< incremant<< " points "<<endl;
		                repeat[first_num1]=first_num1;
		                repeat[second_num1]=second_num1;	
		                list[first_num1]="*";
		                list[second_num1]="*";
		                cout<<"if you want finish game write end ";
		                cin>>finish;
		                break;
		            }
		            else
		            {
		                	list[first_num1]=alpha[first_num1];
		                	list[second_num1]=alpha[second_num1];
		                	for(int i=0 ; i<20;i++)
		                	{
		                	    cout<<list[i]<<" ";
		                	 }
		                	cout<<"\ntry again\n";
		                	list[first_num1]=list_two[first_num1];
		                	list[second_num1]=list_two[second_num1];
		                	break;
		            }
		        }
		    }
		}
		
		
	
		//the second player
		cout<<player_two<<":"<<'\n'<<"Enter the first number of the second player:"<<endl;
        cin>>first_num2;
        cout<<player_one<<":"<<'\n'<<"Enter the second number of you:\n";
        cin>>second_num2;
        repeat[first_num2]=first_num2;
        repeat[second_num2]=second_num2;
        for(int i=0;i<=len;i++)
		{
		    if((first_num2==repeat[i] )|| (second_num2 ==repeat[i]))
		   {
		        cout<<"please dont choose repeat number\n";
		    }
		    else
		    {
		        if ((0<=first_num2<=20) && (0<=second_num2<=20) )
		        {
		              if (alpha[first_num2]==alpha[second_num2])
		              {
		                  list[first_num2]=alpha[first_num2];
		                  list[second_num2]=alpha[second_num2];
		                  for(int i=0 ; i<20;i++)
		                {
		                    cout<<list[i]<<" ";
		                }
		                  cout<<"you win :) "<<endl;
		                  incremant_two=incremant_two+1;
		                  cout<<player_two << " has "<<incremant_two<< " points";
		                  repeat[first_num2]=first_num2;
		                  repeat[second_num2]=second_num2;	
		                  list[first_num2]="*";
		                  list[second_num2]="*";
		                  cout<<"if you want finish game write end ";
		                  cin>>finish;
		                  break;
		              }
		              else
		              {
		                  	list[first_num2]=alpha[first_num2];
		                  	list[second_num2]=alpha[second_num2];
		                  	for(int i=0 ; i<20;i++)
		                {
		                    cout<<list[i]<<" ";
		                }
		                  	cout<<"\ntry again\n";
		                  	list[first_num2]=list_two[first_num2];
		                  	list[second_num2]=list_two[second_num2];
		                  	break;
		              }
		        }   
		    }   
		}
    }		
}