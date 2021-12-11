#include <iostream>
#include <cstdlib>
using namespace std;

void check (int mode, string player, string computer, string grid[][6], string names[]){
         int count = 0;

         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 2; c++){
             if (player == "🔴" && (grid[r][c] == "🔴" && grid[r][c + 1] == "🔴" && grid[r][c + 2] == "🔴" && grid[r][c + 3] == "🔴")){   
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r][c + 1] == "🔴" && grid[r][c + 2] == "🔴" && grid[r][c + 3] == "🔴")){   
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r][c + 1] == "🟡" && grid[r][c + 2] == "🟡" && grid[r][c + 3] == "🟡")){   
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }

             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r][c + 1] == "🟡" && grid[r][c + 2] == "🟡" && grid[r][c + 3] == "🟡")){   
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
         }
         }

         for (int r = 0; r <= 3; r++){
         for (int c = 0; c <= 5; c++){
             if (player == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c] == "🔴" && grid[r + 2][c] == "🔴" && grid[r + 3][c] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }    
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c] == "🔴" && grid[r + 2][c] == "🔴" && grid[r + 3][c] == "🔴")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             } 
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c] == "🟡" && grid[r + 2][c] == "🟡" && grid[r + 3][c] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }       
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c] == "🟡" && grid[r + 2][c] == "🟡" && grid[r + 3][c] == "🟡")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }             
         }
         }
         
         for (int r = 6; r >= 3; r--){
         for (int c = 0; c <= 2; c++){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c + 1] == "🔴" && grid[r - 2][c + 2] == "🔴" && grid[r - 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c + 1] == "🔴" && grid[r - 2][c + 2] == "🔴" && grid[r - 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c + 1] == "🟡" && grid[r - 2][c + 2] == "🟡" && grid[r - 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c + 1] == "🟡" && grid[r - 2][c + 2] == "🟡" && grid[r - 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
}
}

            for (int r = 0; r <= 3; r++){
            for (int c = 0; c <= 2; c++){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c + 1] == "🔴" && grid[r + 2][c + 2] == "🔴" && grid[r + 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r + 1][c + 1] == "🔴" && grid[r + 2][c + 2] == "🔴" && grid[r + 3][c + 3] == "🔴")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c + 1] == "🟡" && grid[r + 2][c + 2] == "🟡" && grid[r + 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r + 1][c + 1] == "🟡" && grid[r + 2][c + 2] == "🟡" && grid[r + 3][c + 3] == "🟡")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }

            for (int r = 0; r <= 3; r++){
            for (int c = 5; c >= 3; c--){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }

            for (int r = 6; r <= 3; r--){
            for (int c = 5; c <= 3; c--){
              if (player == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🔴" && (grid[r][c] == "🔴" && grid[r - 1][c - 1] == "🔴" && grid[r - 2][c - 2] == "🔴" && grid[r - 3][c - 3] == "🔴")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "🟡" && (grid[r][c] == "🟡" && grid[r - 1][c - 1] == "🟡" && grid[r - 2][c - 2] == "🟡" && grid[r - 3][c - 3] == "🟡")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }
}
         
void print (string grid[][6]){
         cout << endl;
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             cout << grid[r][c];
         }
             cout << endl;
         }
}

void computerMove (int n, int mode, string &player, string &computer, string grid[][6], string names[]){
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
                if ((grid[r][n] == "🔴" || grid[r][n] == "🟡") && r == 0)
                   computerMove (n, mode, player, computer, grid, names);
            }
            }

         print (grid);
         check (mode, player, computer, grid, names);
}

void userMove (int n, int mode, string &player, string &computer, string grid[][6], string names[]){
         static int count = 1;

         if (count == 22){
            cout << "\nNo more moves are available." << endl;
            cout << "It's a draw!" << endl;  
            exit(0);
         }
         if (count == 1) cout << "Round " << count << endl;
         else { 
              cout << "\nRound " << count << endl;
         }

         cout << "It's " << names[0] << "'s turn." << endl;
         cout << "Enter a column number: ";
         cin >> n;
         
         while (n <= 0 || n >= 7){
              cout << "Illegal. The columns numbers are 1, 2, 3, 4, 5, and 6." << endl;
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
                cout << "\nIllegal. No slots are available in this column." << endl;
                userMove (n, mode, player, computer, grid, names);
             }
         }
         }

         print (grid);
         cout << endl;
         
         check (mode, player, computer, grid, names);
         computerMove (n, mode, player, computer, grid, names);
         count++;
         userMove (n, mode, player, computer, grid, names);
}

void assign (string &player, string &computer, string color){
         if (color == "red"){ 
             player = "🔴";
             computer = "🟡";
         }

         else {
             player = "🟡";
             computer = "🔴";
         }

         if (color == "yellow"){
            player = "🟡";
            computer = "🔴";
         }

         else {
           player = "🔴";
           computer = "🟡";
         }  
}

int main (){
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
         
         while (mode != 1 || mode != 2){
               cout << "Enter the number which corresponds with the game mode of your choice: " << endl << endl;
               cout << "1. Player VS Player" << endl;
               cout << "2. Player VS Computer" << endl << endl;
               cin >> mode;
               cout << endl;
               if (mode == 1) break;
               if (mode == 2) break;
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
               cout << "Illegal. Your choices are either \"red\" or \"yellow\"" << endl;
         }

         assign (player, computer, color);
         print (grid);
         cout << endl;
         userMove (n, mode, player, computer, grid, names);

         return 0;
}
