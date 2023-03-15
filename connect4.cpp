// Ashiq Khan
// Connect 4 (in C++)
/* The following program will challenge the user to a friendly game of Connect 4.
   The user will have the option of playing against a human or a computer.
   In addition, the user can select the color of their chip. Once the outcome of
   the match is decided, the user can choose whether to play again. If the user
   says "yes," the program restarts. Otherwise, the program terminates.
*/  

#include <iostream>
#include <cstdlib>
using namespace std;

bool flag = false; 
bool computerTurn = false;
int PVPcount = 0;
int PVCcount = 0;
int P1winCount = 0;
int P2winCount = 0;
int P1lossCount = 0;
int P2lossCount = 0;
int PVPdrawCount = 0;
int PVCdrawCount = 0;
double P1ratio;
double P2ratio;

// The purpose of the function is to restart the program if the user wants to play again.
void restart (){
     string answer;
     while (answer != "yes" || answer != "no"){
           cout << "\nWould you like to play again?\nEnter \'yes' or \'no' to continue: ";
           cin >> answer;
           
           if (answer == "yes"){
               cout << endl << endl;
               flag = true;
               break;
           }
                         
           if (answer == "no") exit(0);
           cout << "\nIllegal. You must enter \'yes' or \'no' to continue: ";
    }
}

// The purpose of this function is to display statistics for Player 1 and Player 2.
void display (){
             if (P1winCount != 0 && PVPcount + PVCcount != 0){
                P1ratio = (double) P1winCount / (P1winCount + P1lossCount + PVPdrawCount + PVCdrawCount) * 100;
                P1ratio = (int) P1ratio;
             }

             cout << "Player 1" << endl;
             cout << "¯¯¯¯¯¯¯¯" << endl;
             cout << "No. of Games Played: " << P1winCount + P1lossCount + PVPdrawCount + PVCdrawCount << endl;
             cout << "No. of Wins: " << P1winCount << endl;
             cout << "No. of Losses: " << P1lossCount << endl;
             cout << "No. of Draws: " << PVPdrawCount + PVCdrawCount << endl;

             if (((int) P1ratio) * 100 % 100 == 0) 
                cout << "Win / Loss Ratio: " << P1ratio << ".00%" << endl;
             else cout << "Win / Loss Ratio: " << P1ratio << endl;

             if (P2winCount != 0 && PVPcount + PVCcount != 0){
                P2ratio = (double) P2winCount / (P2winCount + P2lossCount + PVPdrawCount) * 100;
                P2ratio = (int) P2ratio;
             }
  
             cout << endl << "Player 2" << endl;
             cout << "¯¯¯¯¯¯¯¯" << endl;
             cout << "No. of Games Played: " << PVPcount << endl;
             cout << "No. of Wins: " << P2winCount << endl;
             cout << "No. of Losses: " << P2lossCount << endl;
             cout << "No. of Draws: " << PVPdrawCount << endl;

             if (((int) P2ratio) * 100 % 100 == 0) 
                cout << "Win / Loss Ratio: " << P2ratio << ".00%" << endl;
             else cout << "Win / Loss Ratio: " << P2ratio << endl;

             cout << endl << endl;
}

// The purpose of this function is to print the Connect 4 grid.
void print (string grid[][6]){
         cout << endl;
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             cout << grid[r][c];
         }
             cout << endl;
         }
}

// The purpose of this function is to determine if there are four in a row.
void check (int mode, string player, string computer, string grid[][6], string names[]){
         string answer;
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 2; c++){
             if (player == "🔴" && (grid[r][c] == "🔴" && grid[r][c + 1] == "🔴" && grid[r][c + 2] == "🔴" && grid[r][c + 3] == "🔴")){   
               if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r][c + 1] == "🔴" && grid[r][c + 2] == "🔴" && grid[r][c + 3] == "🔴")){   
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r][c + 1] == "🟡" && grid[r][c + 2] == "🟡" && grid[r][c + 3] == "🟡")){   
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }

             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r][c + 1] == "🟡" && grid[r][c + 2] == "🟡" && grid[r][c + 3] == "🟡")){   
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
         }
         }

         for (int r = 0; r <= 3; r++){
         for (int c = 0; c <= 5; c++){
             if (player == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c] == "🔴" && grid[r + 2][c] == "🔴" && grid[r + 3][c] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }    
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c] == "🔴" && grid[r + 2][c] == "🔴" && grid[r + 3][c] == "🔴")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             } 
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c] == "🟡" && grid[r + 2][c] == "🟡" && grid[r + 3][c] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }       
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c] == "🟡" && grid[r + 2][c] == "🟡" && grid[r + 3][c] == "🟡")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }             
         }
         }
         
         for (int r = 6; r >= 3; r--){
         for (int c = 0; c <= 2; c++){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c + 1] == "🔴" && grid[r - 2][c + 2] == "🔴" && grid[r - 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c + 1] == "🔴" && grid[r - 2][c + 2] == "🔴" && grid[r - 3][c + 3] == "🔴")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c + 1] == "🟡" && grid[r - 2][c + 2] == "🟡" && grid[r - 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c + 1] == "🟡" && grid[r - 2][c + 2] == "🟡" && grid[r - 3][c + 3] == "🟡")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
}
}

            for (int r = 0; r <= 3; r++){
            for (int c = 0; c <= 2; c++){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c + 1] == "🔴" && grid[r + 2][c + 2] == "🔴" && grid[r + 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c + 1] == "🔴" && grid[r + 2][c + 2] == "🔴" && grid[r + 3][c + 3] == "🔴")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c + 1] == "🟡" && grid[r + 2][c + 2] == "🟡" && grid[r + 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c + 1] == "🟡" && grid[r + 2][c + 2] == "🟡" && grid[r + 3][c + 3] == "🟡")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                }
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
            }
            }

            for (int r = 0; r <= 3; r++){
            for (int c = 5; c >= 3; c--){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
            }
            }

            for (int r = 6; r <= 3; r--){
            for (int c = 5; c <= 3; c--){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
                
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print(grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   P1winCount++;
                   P2lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   cout << "You win!" << endl;
                   P1winCount++;
                   restart();
                   return;
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   if (PVPcount > 0) print(grid);
                   cout << endl << names[1] << " wins!" << endl;
                   P2winCount++;
                   P1lossCount++;
                   restart();
                   return;
                } 
               
                if (mode == 2){
                   if (PVCcount > 0) print (grid);
                   cout << "\nYou lose." << endl;
                   P1lossCount++;
                   restart();
                   return;
                }
             }
            }
            }
}

// The purpose of this function is to implement the computer's move.
void computerMove (int n, int mode, string player, string computer, string grid[][6], string names[]){
        beginning: 
        if (mode == 1){
            cout << "It's " << names[1] << "'s turn." << endl;
            cout << "Enter a column number: ";
            cin >> n;
            n--;
         }
        
         if (mode == 2){
            cout << "It's the computer's turn." << endl;
            n = rand() % 6; 
         }
  
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             if (grid[r][n] == "🟦" && r == 6){
                 grid[r][n] = computer;
                 break;
             }   
             
             if ((grid[r][n] == "🔴" || grid[r][n] == "🟡") && r != 0 && grid[r - 1][n] == "🟦"){
                grid[r - 1][n] = computer;
                break;
             }
                
            if ((grid[r][n] == "🔴" || grid[r][n] == "🟡") && r == 0){
               cout << "\nIllegal. No slots are available in this column." << endl;
               goto beginning;
            }
            }
            }

            if (PVPcount == 0 || PVCcount == 0) print(grid);
            check(mode, player, computer, grid, names);
}

// The purpose of this function is to implement the user's move.
void userMove (int n, int mode, string player, string computer, string temp, string color, string grid[][6], string names[]){
         static int count = 1;

         if (count == 22){
            cout << "No more moves are available." << endl;
            cout << "It's a draw!" << endl;  
            if (mode == 1) PVPdrawCount++;
            if (mode == 2) PVCdrawCount++;
            goto peak;
         }

         if (count == 1){
            print(grid);
            cout << endl;
         }
  
         if (count == 1) cout << "Round " << count << endl;
         else if ((PVPcount > 0 || PVCcount > 0) && computerTurn == true)
              cout << "Round" << count << endl;
         else  
              cout << "\nRound " << count << endl;
         beginning:
         cout << "It's " << names[0] << "'s turn." << endl;
         cout << "Enter a column number: ";
         cin >> n;
         
         while (n < 1 || n > 6){
              cout << "\nIllegal. The columns numbers are 1, 2, 3, 4, 5, and 6." << endl;
              cout << "Enter a column number: ";
              cin >> n;
         }
         n--;

         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             if (grid[r][n] == "🟦" && r == 6){
                 grid[r][n] = player;
                 break;
             }     
             if ((grid[r][n] == "🔴" || grid[r][n] == "🟡") && r != 0 && grid[r - 1][n] == "🟦"){
                grid[r - 1][n] = player;
                break;
             }
             if ((grid[r][n] == "🔴" || grid[r][n] == "🟡") && r == 0){
                cout << "Illegal. No slots are available in this column." << endl;
                goto beginning;
             }
         }
         }

         print(grid);
         cout << endl;
         
         check(mode, player, computer, grid, names);
         peak:
         if (flag == true){
            flag = false;
            cout << "Welcome to Connect 4!" << endl;

         top:    
         while (mode != 1 || mode != 2){
               cout << "Enter the number which corresponds with the game mode of your choice: " << endl << endl;
               cout << "1. Player VS Player" << endl;
               cout << "2. Player VS Computer" << endl;
               cout << "3. View Statistics" << endl << endl;
               cin >> mode;
           
               cout << endl;
           
               if (mode == 1 || mode == 2 || mode == 3) break;
         }

         if (mode == 1){
            cout << "Player 1. Enter your name: ";
            cin >> temp;
            names[0] = temp;

            cout << "Player 2. Enter your name: ";
            cin >> temp;
            names[1] = temp;
            cout << endl;
         }

         if (mode == 2){
            cout << "Enter your name: ";
            cin >> temp;
            names[0] = temp;
            cout << endl;
         }

         if (mode == 3){
            display();
            goto top;
         }

         while (color != "red" || color != "yellow"){
               cout << "Select the color of your chip." << endl;
               cout << "Enter \"red\" or \"yellow\" to continue: ";
               cin >> color;

               if (color == "red") break;
               if (color == "yellow") break;
               cout << "\nIllegal. Your choices are either \"red\" or \"yellow\"" << endl;
         }

         if (color == "red"){ 
             player = "🔴";
             computer = "🟡";
         }

         else {
             player = "🟡";
             computer = "🔴";
         }
           
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             grid[r][c] = "🟦";
         }    
         }

         count = 1;
         userMove(n, mode, player, computer, temp, color, grid, names);   
         }

         computerTurn = true;
         computerMove(n, mode, player, computer, grid, names);
         computerTurn = false;
         if (flag == true) goto peak;
         count++;
         userMove(n, mode, player, computer, temp, color, grid, names);
}

// The purpose of this function is to assign a color to its respective player.
void assign (string &player, string &computer, string color){
         if (color == "red"){ 
             player = "🔴";
             computer = "🟡";
         }

         else {
             player = "🟡";
             computer = "🔴";
         }
}

// The purpose of this function is to execute the program.
int main (){
         srand(time(0));
         int n;
         int mode;
         string temp;
         string player;
         string computer;
         string color;
         string names[2];
         string grid[7][6];

         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             grid[r][c] = "🟦";
         }
         }

         cout << "Welcome to Connect 4!" << endl;

         redo:
         while (mode != 1 || mode != 2){
               cout << "Enter the number which corresponds with the game mode of your choice: " << endl << endl;
               cout << "1. Player VS Player" << endl;
               cout << "2. Player VS Computer" << endl;
               cout << "3. View Statistics" << endl << endl;
               cin >> mode;
               
               cout << endl;
           
               if (mode == 1 || mode == 2 || mode == 3) break;
               
               cout << "Illegal. Your choices are 1, 2, and 3.\n";
          }
         
         if (mode == 1) PVPcount++;
         if (mode == 2) PVCcount++;
         if (mode == 3){
            display();
            goto redo;
         }
  
         if (mode == 1){
            cout << "Player 1. Enter your name: ";
            cin >> temp;
            names[0] = temp;

            cout << "Player 2. Enter your name: ";
            cin >> temp;
            names[1] = temp;
            cout << endl;
         }

         if (mode == 2){
            cout << "Enter your name: ";
            cin >> temp;
            names[0] = temp;
            cout << endl;
         }

         while (color != "red" || color != "yellow"){
               cout << "Select the color of your chip." << endl;
               cout << "Enter \"red\" or \"yellow\" to continue: ";
               cin >> color;

               if (color == "red") break;
               if (color == "yellow") break;
               cout << "\nIllegal. Your choices are \"red\" and \"yellow\"" << endl;
         }

         assign(player, computer, color);
         userMove(n, mode, player, computer, temp, color, grid, names);

         return 0;        
}
