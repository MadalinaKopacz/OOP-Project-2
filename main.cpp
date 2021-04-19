#include <bits/stdc++.h>
#include "MyMelodyFile.h"
#include "MyUserFile.h"
#include "MyAlbumFile.h"
#include "MyPodcastFile.h"
#include "PodcastRelaxare.h"
#include "PodcastStudiu.h"
#include "playable.h"
#include "MelodiiPop.h"
#include "Media.h"
using namespace std;

int User::numberOfUsers = 0;

int main()
{
    media * med[100];
    int nrmedia,x, nrmediafinal = 0;
    cout<<"Numar de articole media dorite:";
    cin>>nrmedia;

    for(int i = 0; i < nrmedia; i++)
    {
        cout<<"Pentru a citi o melodie apasa tasta 1.\nPentru a citi un podcast apasa tasta 2.\n";
        cin>>x;
        cin.ignore(256, '\n');
        if(x == 1)
        {
            Melody * aux;
            aux = new Melody;
            cin>>*aux;
            med[nrmediafinal] = aux;
            nrmediafinal++;

        }
       else
            if(x == 2)
            {
                Podcast * aux;
                aux = new Podcast;
                cin>>*aux;
                med[nrmediafinal] = aux;
                nrmediafinal++;
            }

            else cout<<"Eroare\n";

    }
    for(int i = 0; i < nrmediafinal; i++)
          med[i]->afisareProductie();
    return 0;
}
