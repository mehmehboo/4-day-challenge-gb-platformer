int check = 0;
int n = 0;
extern int height;
extern int hex[];
extern int x;
extern int y;

int check_col(unsigned char bkg[]){
    check = height * y + x;

    for(n = 0; n < sizeof(hex) - 1; n += 1) {
        if(bkg[check] == hex[n]){
            return 1;
        }
    }
    return 0;
}
