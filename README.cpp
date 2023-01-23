#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
char board[9]={'-','-','-','-','-','-','-','-','-'};

void prscr()
{
    for(int i=0; i<40; i++)
    {
        cout<<endl;
    }
}
void clear_board()
{
    for(int i = 0;i<9;i++)
    {
        board[i]='-';
    }
}

void print_board()
{
    cout<<"Игровая доска\n"<<endl;
    cout<<"-"<<board[0]<<"-|-"<<board[1]<<"-|-"<<board[2]<<"-"<<endl;
    cout<<"-"<<board[3]<<"-|-"<<board[4]<<"-|-"<<board[5]<<"-"<<endl;
    cout<<"-"<<board[6]<<"-|-"<<board[7]<<"-|-"<<board[8]<<"-"<<endl;
}
int get_move()
{
    cout<<"\nДоска: \n"<<endl;
    cout<<"-1-|-2-|-3-"<<endl;
    cout<<"-4-|-5-|-6-"<<endl;
    cout<<"-7-|-8-|-9-"<<endl;
    cout<<"\n";
    print_board();
    int move;
    cin>>move;
    while(move>9||move<1||board[move-1]!='-')
    {
        cout<<"Введите числа от 1 до 9"<<endl;
        cin>>move;
       
    }
    return move;
}
int main()
{
    clear_board();
    for(int i=0; i<9; i++)
    {
        int move = get_move();
        prscr();
        cout<<"Ваш ход это "<<move<<"ход"<<endl;
        if(i%2==0)
        {
            board[move-1]='X';
        }
        else
        {
            board[move-1]='O';
        }
        if(board[0]=='X'&&board[1]=='X'&&board[2]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[3]=='X'&&board[4]=='X'&&board[5]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[6]=='X'&&board[7]=='X'&&board[8]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[0]=='X'&&board[3]=='X'&&board[6]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[1]=='X'&&board[4]=='X'&&board[7]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[2]=='X'&&board[5]=='X'&&board[8]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[0]=='X'&&board[4]=='X'&&board[8]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[2]=='X'&&board[4]=='X'&&board[6]=='X')
        {
            cout<<"X player win!"<<endl;
            break;
        }
        if(board[0]=='O'&&board[1]=='O'&&board[2]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[3]=='O'&&board[4]=='O'&&board[5]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[6]=='O'&&board[7]=='O'&&board[8]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[0]=='O'&&board[3]=='O'&&board[6]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[1]=='O'&&board[4]=='O'&&board[7]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[2]=='O'&&board[5]=='O'&&board[8]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[0]=='O'&&board[4]=='O'&&board[8]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
        if(board[2]=='O'&&board[4]=='O'&&board[6]=='O')
        {
            cout<<"O player win!"<<endl;
            break;
        }
    }
    
    
    return 0;
}
