int check = 0;
int n;

int check_col(unsigned char bkg[], int len, int hex[], int x, int y, int width){
    check = width * y + x;
    len = len - 0;
    hex = hex - 0;

    for(n = 0; n < len; n += 1) {
        if(bkg[check] == hex[n]) {
            return 0;
        }

        else {
            return 1;
        }
    }
}
