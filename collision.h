int check = 0;
int n = 0;
extern int height;
extern char hex[];
extern int x;
extern int y;

int check_col(unsigned char bkg[], int len){
    check = height * (y / 2) + (x / 2);

    while(n < len) {
        if(bkg[check] == hex[n]){
            return 1;
        }

        else {
            return 0;
        }
        n += 1;
    }
}
