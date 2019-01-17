 class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            bool bblue = (inputColor||White||Black);




            for(int k=0;k<30;k++){
                for(int i=4;i>=0;i--){//up
                    for(int j=0;j<=5;j++){//left->right
                        if((inputColor==color[i][j]||color[i][j]== White) &&Record[i][j]!=Max[i][j]+1){
                            if(i==4&&j==5){
                                if(color[i-1][j]!= bblue || color[i][j-1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(i==4&&j==0){
                                if(color[i-1][j]!= bblue||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(i==0&&j==5){
                                if(color[i+1][j]!= bblue || color[i][j-1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(i==0&&j==0){
                                if(color[i+1][j]!= bblue ||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(j==5){
                                if(color[i-1][j]!= bblue|| color[i+1][j]!= bblue || color[i][j-1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(j==0){
                                if(color[i-1][j]!= bblue|| color[i+1][j]!= bblue||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(i==4){
                                if(color[i-1][j]!= bblue|| color[i][j-1]!= bblue ||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else if(i==0){
                                if(color[i+1][j]!= bblue || color[i][j-1]!= bblue ||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }
                            }else{
                                if(color[i-1][j]!= bblue|| color[i+1][j]!= bblue || color[i][j-1]!= bblue ||color[i][j+1]!= bblue){
                                    x=i;
                                    y=j;
                                }else{
                                    x=i;
                                    y=j;
                                }
                            }

                        }
                    }
                }
            }
////////////////////////////////////////////////////////////////////////////////////////
            int k=4;
            for(int j=0;j<=5;j++){//right ->left
                if((inputColor==color[k][j]||color[k][j]== White) &&Record[k][j]!=Max[k][j]+1){
                    x=k;
                    y=j;
                }
                k--;
            }
            for(int i=4;i>=0;i--){
                if((inputColor==color[i][i]||color[i][i]== White) &&Record[i][i]!=Max[i][i]+1){
                    x=i;
                    y=i;
                }
            }
////////////////////////////////////////////////////////////////////////////////////
            for(int j=5;j>=0;j--){
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
            }
/////////////////////////////////////////////////////////////////////////////////
      /*  if((inputColor==color[4][5]||color[4][5]== White) &&Record[4][5]== 0){
            x=4;
            y=5;
        }
         if((inputColor==color[0][5]||color[0][5]== White) &&Record[0][5]== 0){
            x=0;
            y=5;
        }
         if((inputColor==color[4][0]||color[4][0]== White) &&Record[4][0]== 0){
            x=4;
            y=0;
        }
         if((inputColor==color[0][0]||color[0][0]== White) &&Record[0][0]== 0){
            x=0;
            y=0;
        }*/
        for(int i=4;i>=0;i--){//up
            for(int j=0;j<=5;j++){
                if((inputColor==color[i][j]||color[i][j]== White) &&Record[i][j]==Max[i][j]){
                    x=i;
                    y=j;
                }
            }
        }
    for(int j=5;j>=0;j--){
        if((inputColor==color[0][j]||color[0][j]== White) &&Record[0][j]!=Max[0][j]+1){
            if(color[1][j]!= bblue){
                x=0;
                y=j;
            }else{
                x=0;
                y=j;
            }
        }
        if((inputColor==color[4][j]||color[4][j]== White) &&Record[4][j]!=Max[4][j]+1){
            if(color[3][j]!= bblue){
                x=4;
                y=j;
            }else{
                x=4;
                y=j;
            }
        }
    }

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
