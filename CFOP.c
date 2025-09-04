#include<stdio.h>

void input (int cube[54])
{
    //to get the top matrix
    printf("enter the top matrix\n");
    /*this variable will be used to take the advantage of the fact that in the top face the 
    the colors have such indexing */
    int t=0;
    //variable to be used in while loop
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&cube[j+t]);
        }
        //printf("\ni = %d",i);
        //printf("\nt = %d",t);
        t = t+3;
        
    }

    printf("\nin a row enter the left, center, right matrix\n");
    //to get the left, center and right matrix at the same time
    t=9;
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<9;j++)
        {
            scanf("%d",&cube[t+j]);
        }
        t = t+9;
    }

    //to get the bottom and back face at the same time
    
    printf("\nenter the bottom and back face \n");
    t=36;
    for(int i=0;i<6;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&cube[t+j]);
        }
        t = t+3;
    }
    return;
}

void display(int cube[54])
{
    //displaying the top layer
    int t=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++){ printf(" ");}
        for(int j=0;j<3;j++){printf("%d ",cube[t+j]);}
        t = t+3;
        printf("\n");
    }

    //displaying the right, center, left faces
    t=9;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++){printf("%d ",cube[t+j]);}
        t = t+9;
        printf("\n");
    }

    //displaying the bottom and back face
    t = 36;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++){printf(" ");}
        for(int j=0;j<3;j++){ printf("%d ",cube[j+t]);}
        t = t+3;
        printf("\n");
    }
    return;
}

//this is the function for rotation
//a represents the face to be rotated
//b represents the no of rotation
void rot(int cube[54],int a,int b)
{
    int temp=0;
    //if the rotation is of top face 
    if(a==6)
    {
        //for b=1 the top layer will rotate to right once
        for(int i=0;i<b;i++)
        {
            
            //the top face color (type 1)
            temp = cube[0];
            cube[0] = cube[2];
            cube[2] = cube[8];
            cube[8] = cube[6];
            cube [6] = temp;
            //top face colors (type 2)
            temp = cube[1];
            cube[1] = cube[5];
            cube[5] = cube[7];
            cube[7] = cube[3];
            cube[3] = temp;
            //first layer (type 1)
            temp = cube[9];
            cube[9] = cube[53];
            cube[53] = cube[15];
            cube[15] = cube[12];
            cube[12] = temp;
            //first layer (type 2)
            temp = cube[52];
            cube[52] = cube[16];
            cube[16] = cube[13];
            cube[13] = cube[10];
            cube[10] = temp;
            //first layer (type 3)
            temp = cube[11];
            cube[11] = cube[51];
            cube[51] = cube[17];
            cube[17] = cube[14];
            cube[14] = temp;
        }
        if(b==1)printf("\nrotate top layer to right\n");
        else if(b==2)printf("\nrotate top layer right twice\n");
        else if(b==3)printf("\nrotate top layer to left\n");
    }
    //if the rotation is of bottom layer
    else if(a==5)
    {
        //b=1 will rotate the bottom layer to left
        for(int i=0;i<b;i++)
        {
            //the bottom face(type 1)
            temp = cube[36];
            cube[36] = cube[38];
            cube[38] = cube[44];
            cube[44] = cube[42];
            cube[42] = temp;
            //bottom face (type 2)
            temp = cube[37];
            cube[37] = cube[41];
            cube[41] = cube[43];
            cube[43] = cube[39];
            cube[39] = temp;
            //the bottom layer (type 1)
            temp = cube[30];
            cube[30] = cube[33];
            cube[33] = cube[47];
            cube[47] = cube[27];
            cube[27] = temp;
            //the bottom layer (type 2)
            temp = cube[31];
            cube[31] = cube[34];
            cube[34] = cube[46];
            cube[46] = cube[28];
            cube[28] = temp;
            //bottom layer (type 3)
            temp = cube[32];
            cube[32] = cube[35];
            cube[35] = cube[45];
            cube[45] = cube[29];
            cube[29] = temp;
        }
        if(b==1)printf("\nrotate bottom layer to left\n");
        else if(b==2)printf("\nrotate bottom layer twice\n");
        else if(b==3)printf("\nrotate bottom layer right\n");
    }
    //if the rotation is of back face
    else if(a==4)
    {
        //b=1 will rotate the back face clockwise
        for(int i=0;i<b;i++)
        {
            //back face (type 1)
            temp = cube[45];
            cube[45] = cube[47];
            cube[47] = cube[53];
            cube[53] = cube[51];
            cube[51] = temp;
            //back face (type 2)
            temp = cube[46];
            cube[46] = cube[50];
            cube[50] = cube[52];
            cube[52] = cube[48];
            cube[48] = temp;
            //the back layer(type 1)
            temp = cube[42];
            cube[42] = cube[35];
            cube[35] = cube[2];
            cube[2] = cube[9];
            cube[9] = temp;
            //the back layer (type 2)
            temp = cube[43];
            cube[43] = cube[26];
            cube[26] = cube[1];
            cube[1] = cube[18];
            cube[18] = temp;
            //back layer(type 3)
            temp = cube[44];
            cube[44] = cube[17];
            cube[17] = cube[0];
            cube[0] = cube[27];
            cube[27] = temp;
        }
        if(b==1)printf("\nrotate back face clockwise\n");
        else if(b==2)printf("\nrotate back face twice\n");
        else if(b==3)printf("\nrotate back face anticlockwise\n");
    }
    //if the rotation is of front face 
    else if (a==3)
    {
        //b=1 will rotate the front face anticlockwise
        for(int i=0;i<b;i++)
        {
            //front face (type 1)
            temp = cube[12];
            cube[12] = cube[14];
            cube[14] = cube[32];
            cube[32] = cube[30];
            cube[30] = temp;
            //front face (type 2)
            temp = cube[13];
            cube[13] = cube[23];
            cube[23] = cube[31];
            cube[31] = cube[21];
            cube[21] = temp;
            //front layer (type 1)
            temp = cube[6];
            cube[6] = cube[15];
            cube[15] = cube[38];
            cube[38] = cube[29];
            cube[29] = temp;
            //front layer (type 2)
            temp = cube[7];
            cube[7] = cube[24];
            cube[24] = cube[37];
            cube[37] = cube[20];
            cube[20] = temp ;
            //front layer (type 3)
            temp = cube[8];
            cube[8] = cube[33];
            cube[33] = cube[36];
            cube[36] = cube[11];
            cube[11] = temp;
            }
            if(b==1)printf("\nrotate front face anticlockwise\n");
            else if(b==2)printf("\nrotate front face twice\n");
            else if (b==3)printf("\nrotate front face clockwise\n");
    }
    //if the rotation is of right layer
    else if(a==2)
    {
        ///b=1 rotate the right layer down
        for(int i=0;i<b;i++)
        {
            //right face(type 1)
            temp = cube[15];
            cube[15] = cube[17];
            cube[17] = cube[35];
            cube[35] = cube[33];
            cube[33] = temp;
            //right face (type 2)
            temp = cube[24];
            cube[24] = cube[16];
            cube[16] = cube[26];
            cube[26] = cube[34];
            cube[34] = temp;
            //right layer(type 1)
            temp = cube[2];
            cube[2] = cube[47];
            cube[47] = cube[38];
            cube[38] = cube[14];
            cube[14] = temp;
            //right layer (type 2)
            temp = cube[5];
            cube[5] = cube[50];
            cube[50] = cube[41];
            cube[41] = cube[23];
            cube[23] = temp;
            //right layer (type 3)
            temp = cube[8];
            cube[8] = cube[53];
            cube[53] = cube[44];
            cube[44] = cube[32];
            cube[32] = temp;
        }
        if(b==1)printf("\nrotate right layer down\n");
        else if(b==2)printf("\nrotate right layer twice\n");
        else if (b==3)printf("\nrotate right layer up\n");
    }
    //if the rotation is of left layer
    else if(a==1)
    {
        //b=1 will rotate left layer down
        for(int i=0;i<b;i++)
        {
            //left face (type 1)
            temp = cube[9];
            cube[9] = cube[11];
            cube[11] = cube[29];
            cube[29] = cube[27];
            cube[27] = temp;
            //left face (type 2)
            temp = cube[10];
            cube[10] = cube[20];
            cube[20] = cube[28];
            cube[28] = cube[18];
            cube[18] = temp;
            //left layer (type 1)
            temp = cube[0];
            cube[0] = cube[45];
            cube[45] = cube[36];
            cube[36] = cube[12];
            cube[12] = temp;
            //left layer (type 2)
            temp = cube[3];
            cube[3] = cube[48];
            cube[48] = cube[39];
            cube[39] = cube[21];
            cube[21] = temp;
            //left layer (type 3)
            temp = cube[6];
            cube[6] = cube[51];
            cube[51] = cube[42];
            cube[42] = cube[30];
            cube[30] = temp;
        }
        if(b==1)printf("\nrotate left layer down\n");
        else if(b==2)printf("\nrotate left layer twice\n");
        else if (b==3)printf("\nrotate the left layer up\n");
    }

    return;
}

void white_plus(int cube[54])
{
    //first with blue center and white at the top
    //if white is at mid right of lef matrix
    //if the bottom mid of top matrix is white
    if(cube[7]==cube[4])
    {
        //if the color below white is orange
        if(cube[13]==cube[25])
        {

        }
        //if the color below white is red
        else if (cube[13]==cube[19])
        {

        }
        //if the color below white is green
        else if (cube[13]==cube[49])
        {

        }
    }
    //if the top mid of center matrix is white
    if(cube[13]==cube[4])
    {
        //if the color above white is blue
        if (cube[7]==cube[22])
        {
            /* code */
        }
        //if the color above white is orange
        else if(cube[7]==cube[25])
        //if the color above white is red
        else if(cube[7]==cube[19])
        //if the color above white is green
        else if (cube[7]==cube[49])
    }
    //if the left mid color is white
    if(cube[21]==cube[4])
    {
        //if left of white is blue
        if(cube[20]==cube[22])
        //if left of white is red
        else if(cube[20]==cube[19])
        //if left of white is orange
        else if(cube[20]==cube[25])
        //if left of white is green
        else if(cube[20]==cube[49])
    }
    //if the right mid matrix is white
    if(cube[23]==cube[4])
    {
        //if right of white is blue
        if(cube[24]==cube[22])
        //if right of white is red
        else if(cube[24]==cube[19])
        //if right of white is orange
        else if(cube[24]==cube[25])
        //if right of white is green
        else if(cube[24]==cube[49])
    }
    //if the bottom mid of center matrix is white
    if(cube[31]==cube[4])
    {
        //if the color below white is blue
        if(cube[37]==cube[22])
        //if the color below white is red
        else if(cube[37]==cube[19])
        //if color below white is orange
        else if(cube[37]==cube[25])
        //if color below white is green
        else if (cube[37]==cube[49])
    }
    //if the top mid of bottom matrix is white
    if(cube[37]==cube[4])
    {
        //if color abve white is blue
        if(cube[31]==cube[22])
        //if color above white is red
        else if(cube[31]==cube[19])
        //if color above white is orange
        else if(cube[31]==cube[25])
        //if color above white is green
        else if(cube[31]==cube[49])
    }
    return;
}

int main()
{
    //this is the code where i am tring to make the cube with just a single array
    int cube[54];
    input(cube);
    display (cube);
    printf("\n");
    display(cube);
}