//Trees
#define tree1 "🌲"
#define tree2 "🌳"
#define tree3 "🌴"
#define xmas_tree "🎄"

//Building materials
#define housewall "#\n#\n#\n#"

//Grass
#define grass_piece "*" 
#define grass_layer "*******************"
#define grass_layer_hori "*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*"
#define grass_array "*******************\n*******************\n*******************\n*******************"

#include <iostream>
using namespace std;


//Trees
class tree{

    public:
        tree(int version)
        {    
            switch(version)
            {
                case 1:
                    cout << tree1;
                    break;
                       
                case 2:
                    cout << tree2;
                    break;

                case 3:
                    cout << tree3;
                    break;
                        
                case 4:
                    cout << xmas_tree;
                    break;
                       
                default:
                    cout << "Error";
                    break;
            }
        }
};


//Grass
class grass{

    public:
        grass(int version)
        {   
            switch(version)
            {
                case 1:
                    cout << grass_piece;
                    break;

                case 2:
                    cout << grass_layer;
                    break;
                        
                case 3:
                    cout << grass_layer_hori;
                    break;

                case 4:
                    cout << grass_array;
                    break;

                default:
                    cout << "Error";
                    break;
            }
        }
};

//Randomchunk
class randomchunk 
{
    public:
        //TODO:Add option for the chunk to be either all natural or city maybe even mixed 
        randomchunk()
        {
            string chunk;
            int num = rand() % 1 + 2;

            //Generate chunk
            for(int x; x < 3; x++)
            {
                if(num == 2)
                {
                    chunk += "*"; //Grass piece
                }
                
                else
                {
                    //Random Trees
                    num = rand() % 1 + 3;

                    switch(num){

                        case 1:
                            chunk += tree1;
                            break;

                        case 2:
                            chunk += tree2;
                            break;

                        case 3:
                            chunk += tree3;
                            break;

                        default:
                            chunk += "Error";
                            break;
                    }
                    
                }
            }

            cout << chunk;
        }
};