  class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            Color player1;

            if(inputColor == Red){
                player1 =  Blue;
            }else{
                player1 = Red;
            }


    /////////////////////////////////////////////////////////////////////////////////
            if((inputColor==color[0][5]||color[0][5]== White) &&Record[0][5]== 0){
                x=0;
                y=5;
                return;
            }
            if((inputColor==color[0][0]||color[0][0]== White) &&Record[0][0]== 0){
                x=0;
                y=0;
                return;
            }
             if((inputColor==color[4][0]||color[4][0]== White) &&Record[4][0]== 0){
                x=4;
                y=0;
                return;
            }
             if((inputColor==color[4][5]||color[4][5]== White) &&Record[4][5]== 0){
                x=4;
                y=5;
                return;
            }
    //////////////////////////////////////////////////////////////////////////////////2
            for(int i=4;i>=0;i--){//up
                for(int j=0;j<=5;j++){//left->right
                    if(color[i][j] == player1)continue;
                    if(Max[i][j]==Record[i][j]+1){
                         if((i<4 && color[i+1][j] ==player1) || (i>0 && color[i-1][j]==player1) || (j>0 && color[i][j-1]==player1) || ((j<5 && color[i][j+1]==player1))){
                            x=i;
                            y=j;
                            return;
                         }
                    }
                }
            }
 ////
           /* int k=4;
            for(int j=0;j<=5;j++){//right ->left
                if((inputColor==color[k][j]||color[k][j]== White) &&Record[k][j]!=Max[k][j]+1){
                    x=k;
                    y=j;

                }
                k--;

            }*/

            for(int i=4;i>=0;i--){
                if((inputColor==color[i][i]||color[i][i]== White) &&Record[i][i]!=Max[i][i]+1){
                    x=i;
                    y=i;
                    return;

                }
            }
 ////
///////////////////////////////////////////////////////////////////////////3(Record[4][j]==1 || color[4][j] ==  player1)
            for(int i=0;i<=4;i++){//up
                for(int j=0;j<=5;j++){//left->right
                    if((Record[4][j]==1 || color[4][j] ==  player1)||(Record[0][j]==1 || color[0][j] == player1) || (Record[i][0]==2 || color[i][0] ==  player1) ||(Record[i][5]==2 || color[i][5] ==  player1)){
                        continue;
                    }else if(color[i][j] == player1 || color[i][j] == Black){
                        continue;
                    }else{
                        x=i;
                        y=j;
                        return;
                    }

                    }
            }
////////////////////////////////////////////////////////////////////////////4
            for(int i=0;i<=4;i++){//up
                    for(int j=0;j<=5;j++){//left->right
                        if(inputColor==color[i][j]||color[i][j]== White){
                            if(Max[i][j]!=Record[i][j]+1){
                                if((i<4 && color[i+1][j] ==player1) || (i>0 && color[i-1][j]==player1) || (j>0 && color[i][j-1]==player1) || ((j<5 && color[i][j+1]==player1))){
                                    x=i;
                                    y=j;
                                    return;
                                }
                            }
                        }
                    }
            }
///////////////////////////////////////////////////////5
            for(int i=4;i>=0;i--){//up
                    for(int j=5;j>=0;j--){//left->right
                        if(inputColor==color[i][j]||color[i][j]== White){
                            x=i;
                            y=j;
                            return;
                        }
                    }
            }
            return;
///////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////¹ï¨¤
        /*    int k=4;
            for(int j=0;j<=5;j++){//right ->left
                if((inputColor==color[k][j]||color[k][j]== White) &&Record[k][j]!=Max[k][j]+1){
                    x=k;
                    y=j;

                }
                k--;
                return;
            }

            for(int i=4;i>=0;i--){
                if((inputColor==color[i][i]||color[i][i]== White) &&Record[i][i]!=Max[i][i]+1){
                    x=i;
                    y=i;
                    return;
                }
            }*/
////////////////////////////////////////////////////////////////////////////////////Àð
            /*for(int j=5;j>=0;j--){
                if((inputColor==color[4][j]||color[4][j]== White) &&Record[4][j]!=Max[4][j]+1){
                    x=4;
                    y=j;
                }
            }
            for(int i=4;i>=0;i--){
                if((inputColor==color[i][5]||color[i][5]== White) &&Record[i][5]!=Max[i][5]+1){
                    x=i;
                    y=5;
                }
            }
            for(int i=4;i>=0;i--){
                if((inputColor==color[i][0]||color[i][0]== White) &&Record[i][0]!=Max[i][0]+1){
                    x=i;
                    y=0;
                }
            }
            for(int j=5;j>=0;j--){
                if((inputColor==color[0][j]||color[0][j]== White) &&Record[0][j]!=Max[0][j]+1){
                    x=0;
                    y=j;
                }
            }*/



        }
        // Any Code You Want to Add
        int getX(){
           return x;
        }
        int getY(){
            return y;
        }
    private:
        int x;
        int y;
    };
