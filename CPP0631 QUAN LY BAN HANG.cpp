#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int dem1 = 0;
class KhachHang{
	private:
		string mkh, tkh, gt, ns, dc;
	public:
		KhachHang(){
			mkh = tkh = gt = ns = dc = "";
		}
		string getMkh(){
			return this->mkh = mkh;
		}
		string getTkh(){
			return tkh;
		}
		string getDc(){
			return dc;
		}
		void setMkh(string s){
			mkh = s;
		}
		friend istream& operator >> (istream& in, KhachHang&a){
//			++dem1;
//			a.mkh = to_string(dem1);
//			while(a.mkh.size() < 3) a.mkh = "0" + a.mkh;
//			a.mkh = "KH" + a.mkh;
			getline(in, a.tkh);
			in >> a.gt >> a.ns;
			scanf("\n");
			getline(in, a.dc);
			return in;
		}
};

int dem2 = 0;
class MatHang : public KhachHang{
	private:
		string mmh, tmh, dvt;
		ll mua, ban;
	public:
		MatHang(){
			mmh = tmh = dvt = "";
			mua = 0;
			ban = 0;
		}
		string getMmh(){
			return this->mmh = mmh;
		}
		void setMmh(string s){
			mmh = s;
		}
		string getTmh(){
			return tmh;
		}
		string getDvt(){
			return dvt;
		}
		ll getMua(){
			return mua;
		}
		ll getBan(){
			return ban;
		}
		friend istream& operator >> (istream& in, MatHang &a){
//			++dem2;
//			a.mmh = to_string(dem2);
//			while(a.mmh.size() < 3) a.mmh = "0" + a.mmh;
//			a.mmh = "MH" + a.mmh;
			getline(in, a.tmh);
			cin >> a.dvt >> a.mua >> a.ban;
			return in;
		}
};

int dem3 = 0;
class HoaDon:public MatHang{
	private:
		string mhd;
		int sl;
	public:
		HoaDon(){
			mhd = "";
			sl = 0;
		}
		void setMkh(string s){
			KhachHang::setMkh(string s);
		}
		void setMmh(string s){
			MatHang::setMmh(string s);
		}
		friend istream& operator >> (istream& in, HoaDon &a){
			++dem3;
			a.mhd = to_string(dem3);
			while(a.mhd.size() < 3) a.mhd = "0" + a.mhd;
			a.mhd = "HD" + a.mhd;
			string s, t; in >> s >> t;
			setMkh(s);
			setMmh(t);
			in >> sl;
			return in;
		}
		friend ostream& operator << (ostream& out, HoaDon &a){
			out << a.mhd << " " << getTkh() << " " << getDc() << " " << getTmh() << " " << getDvt() << " " << getMua() << " " << getBan() << " " << a.sl << " " << getBan()* a.sl << endl;
			return out; 
		}
};


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}