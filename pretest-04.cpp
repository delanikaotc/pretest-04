/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Kelas       : B
Tahun       : 2019
*/

#include <iostream>

using namespace std;

struct ElemtList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList (List& First);
void createElement (pointer& pBaru);
void insertSortNama(List& First, pointer pBaru);
void traversal (List First);

int main()
{
    pointer pBaru;
    List First;
    int n;

    createList(First);
    createElement(pBaru);
    insertSortNama(First, pBaru, n);
    traversal(First);
}

void createList(List& First){
    First = NULL;
    }

void createElmt (pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama : "; cin>>pBaru->nama;
    cout<<"NPM  : "; cin>>pBaru->npm;
    pBaru->next=NULL;
}

void insertFirst (List& First, pointer pBaru){
    if(First==NULL){
        First=pBaru;
    }
    else{
        pBaru->next=First;
        First=pBaru;
    }
}

void traversal (List First){
    pointer pBantu;
    pBantu=First;
    while(pBantu != NULL){
        cout<<"Nama : "<<pBantu->nama>>endl;
        cout<<"NPM  : "<<pBantu->npm>>endl;
        pBantu=pBantu->next;
    }
    cout<<endl;
}

void insertSortNama(List& First, pointer pBaru, int n){
	r_mhs tempMhs;
    for(int i=0; i<n;i++){
        for(int j=1;j<n;j++){
            if(strcmp(mhs[j-1].nama, mhs[j].nama)>0){

				tempMhs = mhs[j-1];

				mhs[j-1] = mhs[j];

				mhs[j] = tempMhs;

			}

		}

	}

}
