#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int jumlahdata, fisika[10], kimia[10], biologi[10],mtk[10],b=0;
    char nama[10][10];
    float total[10],total_fisika=0, total_kimia=0,total_biologi=0,total_mtk=0;
    float mean[10],mean_fisika,mean_kimia,mean_biologi,mean_mtk;


    cout << "Masukkan Banyaknya Data : ";
    cin >> jumlahdata;

    for (int i = 0; i < jumlahdata; i++){
        cout << "----------------------------"<<endl;
        cout << "Data ke - "<< i + 1 << endl;
        cout << "----------------------------"<<endl;
        cout << "Nama Panggilan\t : ";
        cin >> nama[i];
        cout << "Nilai Fisika\t : ";
        cin >> fisika[i];
        cout << "Nilai Matematika : ";
        cin >> mtk[i];
        cout << "Nilai Kimia\t : ";
        cin >> kimia[i];
        cout << "Nilai Biologi\t : ";
        cin >> biologi[i];

        total[i] = fisika[i] + mtk[i] + biologi[i] + kimia[i];
        mean[i] = total[i] / 4;
        
        total_fisika = total_fisika + fisika[i];
        total_mtk = total_mtk + mtk[i];
        total_kimia = total_kimia + kimia[i];
        total_biologi = total_biologi + biologi[i];
        
        mean_fisika = total_fisika/jumlahdata;
        mean_mtk = total_mtk/jumlahdata;
        mean_kimia = total_kimia/jumlahdata;
        mean_biologi = total_biologi/jumlahdata;
    }
	cout<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<< setw(4) <<"No" <<setw(13) << "Nama"
		<< setw(15)<< "Fisika" << setw(18) << "Matematika"
		<< setw(13)<< "Kimia" << setw(16) <<"Biologi\n";
	cout<<"--------------------------------------------------------------------------------"<<endl;
	
	for (int i = 0; i <jumlahdata;i++){
		int no = i+1;
	cout<< setw(3) << no <<setw(14) <<nama[i]
		<< setw(13) <<fisika[i] << setw(16) <<mtk[i]
		<< setw(16) << kimia[i] <<setw(14) << biologi[i] <<"\n";
	cout<<"--------------------------------------------------------------------------------"<<endl;
	}
	
    cout << "\nRata - Rata Tiap Mahasiswa :\n";
    for(int i = 0; i < jumlahdata; i++){
        cout << nama[i] << "\t : "<<mean[i] << endl;
    }

    cout << "\nRata -Rata Mata Kuliah : \n";
    cout << "Fisika\t   : " << mean_fisika << "\n";
    cout << "Matematika : " << mean_mtk << "\n";
    cout << "Kimia\t   : " << mean_kimia << "\n";
    cout << "Biologi\t   : " << mean_biologi << "\n";
    return 0;
}
