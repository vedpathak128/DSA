class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates[0]=='a'&&(int)coordinates[1]%2==0) return true;
        else if(coordinates[0]=='a'&&(int)coordinates[1]%2==1) return false;
        else if(coordinates[0]=='b'&&(int)coordinates[1]%2==1) return true;
        else if(coordinates[0]=='b'&&(int)coordinates[1]%2==0) return false;
        else if(coordinates[0]=='c'&&(int)coordinates[1]%2==0) return true;
        else if(coordinates[0]=='c'&&(int)coordinates[1]%2==1) return false;
        else if(coordinates[0]=='d'&&(int)coordinates[1]%2==0) return false;
        else if(coordinates[0]=='d'&&(int)coordinates[1]%2==1) return true;
        else if(coordinates[0]=='e'&&(int)coordinates[1]%2==0) return true;
        else if(coordinates[0]=='e'&&(int)coordinates[1]%2==1) return false;
        else if(coordinates[0]=='f'&&(int)coordinates[1]%2==0) return false;
        else if(coordinates[0]=='f'&&(int)coordinates[1]%2==1) return true;
        else if(coordinates[0]=='g'&&(int)coordinates[1]%2==0) return true;
        else if(coordinates[0]=='g'&&(int)coordinates[1]%2==1) return false;
        else if(coordinates[0]=='h'&&(int)coordinates[1]%2==0) return false;
        else if(coordinates[0]=='h'&&(int)coordinates[1]%2==1) return true;
        return false;
    }
};