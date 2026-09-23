#include <stdio.h>

int main(){
	const int price = 15000, fee = 2000;
	
	int totalOrder = 2, totalTransaction = 5, totalPrice;
	bool isMember = 1, isNotMember, isEconomical, isDiscount;
	
	totalPrice = price * totalOrder;
	totalPrice += fee;
	
	isEconomical = totalPrice > 30000; 
	isDiscount = isEconomical && isMember;

	++totalTransaction;

	isNotMember = !isMember;
	
	int buffer1 = totalOrder << 1;
	bool buffer2 = totalTransaction & 1;
	

	printf("\n"
	"Total harga 		= %d\n"
	"Hemat?			= %d\n"
	"Dapat diskon? 		= %d\n"
	"Jumlah transaksi 	= %d\n"
	"Bukan member? 		= %d\n"
	"Dobel gelas 		= %d\n"
	"Cek ganjil 		= %d\n"
	, totalPrice, isEconomical, isDiscount, totalTransaction, isNotMember, buffer1, buffer2);

	return 0;
}