#include <stdio.h>

int main() {
 int i,N,x, y,c;
 scanf("%i",&N);


      char calopsita[11][15] = { "PROXYCITY\n",
                                "P.Y.N.G.\n" ,
                                "DNSUEY!\n",
                                "SERVERS\n",
                                "HOST!\n",
                                "CRIPTONIZE\n",
                                "OFFLINE DAY\n",
                                "SALT\n",
                                "ANSWER!\n",
                                "RAR?\n",
                                "WIFI ANTENNAS\n"};
    for(i=0; i<N; i++){
    scanf("%d %d",&x,&y);

    c = (int)x + (int)y;

    printf(calopsita[c]);

    if (c>10){
        return 0;
    }


    }


    return 0;
}
