#include "Referee.h"
#include "Player.h"
#include "Tournament.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
    Tournament::Tournament(){
       // this->Player_Scores = new int[8];
    }
    Tournament::~Tournament(){
        //delete[] Player_Scores;
    }
    // void Tournament::make_moves_all(Player* competitors,int number_players_left){
    //     for (int k = 0; k < number_players_left; k++){
    //         competitors[k].makeMove();
    //     }
    // }
    Player* Tournament::run(array<Player *, 8>  competitors){
        Referee Ref;

        //int *Semi_Finalists_position_in_array = new int[4];
        int main_array_incrementor = 0;
        array<Player*,4> Semi_Finalists;
        int Semi_Finalists_array_position = 0;

        // Playoff Round 2
        for (int j = 0; j < 4; j++){
        for (int k = 0; k < 5; k++){
            char result = Ref.refGame((competitors.at(main_array_incrementor)),(competitors.at(main_array_incrementor+1)));
            if (result == 'W'){
                Player_Scores.at(main_array_incrementor)++;
            }
            else if (result == 'L'){
                Player_Scores.at(main_array_incrementor+1)++;
            }
        }
        if (Player_Scores.at(main_array_incrementor) > Player_Scores.at(main_array_incrementor+1)){
            Semi_Finalists.at(Semi_Finalists_array_position) = competitors.at(main_array_incrementor);
        }
        else {
            Semi_Finalists.at(Semi_Finalists_array_position) = competitors.at(main_array_incrementor+1);
        }
            Semi_Finalists_array_position++;
            main_array_incrementor += 2;
        }

        // Conference Finals / Semi Finals
        Semi_Finalists_array_position = 0;
        array<Player*,2> Finalists;
        int Finalist_position_in_array = 0;
        array<int,4> semi_scores;

        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 5; k++){
                char result = Ref.refGame((Semi_Finalists.at(Semi_Finalists_array_position)),(Semi_Finalists.at(Semi_Finalists_array_position+1)));
                if (result == 'W'){
                    semi_scores.at(Semi_Finalists_array_position)++;
                }
                else if (result == 'L'){
                    semi_scores.at(Semi_Finalists_array_position+1)++;
                }
            }
            if (semi_scores.at(Semi_Finalists_array_position) > semi_scores.at(Semi_Finalists_array_position+1)){
                Finalists.at(Finalist_position_in_array) = Semi_Finalists.at(Semi_Finalists_array_position);
            }
            else {
                Finalists.at(Finalist_position_in_array) = Semi_Finalists.at(Semi_Finalists_array_position+1);
            }
                Semi_Finalists_array_position += 2;
                Finalist_position_in_array++;
        }
        
        // The Finals
        Finalist_position_in_array = 0;
        Player* Winner;
        array<int, 2> Final_scores;

            for (int k = 0; k < 5; k++){
                char result = Ref.refGame((Finalists.at(Finalist_position_in_array)),(Finalists.at(Finalist_position_in_array+1)));
                if (result == 'W'){
                    Final_scores.at(Finalist_position_in_array)++;
                }
                else if (result == 'L'){
                    Final_scores.at(Finalist_position_in_array+1)++;
                }
            }
            if (Final_scores.at(Finalist_position_in_array) > semi_scores.at(Finalist_position_in_array+1)){
                Winner = Finalists.at(Finalist_position_in_array);
            }
            else {
                Winner = Finalists.at(Finalist_position_in_array+1);
            }
                Finalist_position_in_array++;

        return Winner;






















        // Player* All_Players = new Player[8];
        // int *all_players_position_in_array = new int[4];
        // int *all_players_scores = new int[8];

      
        // int *Semi_finalists_position_in_array = new int[2];
        

        
        // int *Finalist_position_in_array = new int[2];
        

       

        // for (int playoffs_rounds = 0; playoffs_rounds < 3; playoffs_rounds++){
        //     even = 0;
        //     odd = 1;
        //     if (playoffs_rounds = 1){
        //         number_rounds = 2;
        //     }
        //     if (playoffs_rounds == 2){
        //         number_rounds = 1;
        //     }
        //     for (int playoffs_round = 0; playoffs_round < number_rounds; playoffs_round++){
        //         for (int j = 0; j < 5; j++){
        //             char result = refGame(competitors[even],competitors[odd]);
        //             if (result == 'W'){
        //                 Player_Scores[even]++;
        //             }
        //             else if (result == 'L'){
        //                 Player_Scores[odd]++;
        //             }
        //         }

        //         even += 2;
        //         odd += 2;
        //     }
        //     number_rounds-2;
        // }
    }