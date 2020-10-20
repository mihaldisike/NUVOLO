/** INLCUDE è Uguale 100% al php e similare a moltissimi altri linguaggi
 * in pratica fa il copia incolla di quel file e lo inserisce al posto della riga
 * O in altre parole la riga è sostituita dal contenuto del file
 * 
 * Questo ci consente di accedere a risorse o funzioni che sono presenti in quel file / libreria
 */
#include <fmt/format.h>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;
//RAII

using namespace std;
int main() {
	/**
	 * Scrivere un programmino che converte da gradi celsious a gradi fahraneith (o come si scrive)
	 * quindi stampare per ogni valore di grado celsious il corrispettivo fahraneith
	 */
	double start = -20;
	double end   = 1500;
	double step  = 1;
	double celsius, fahraneith;
	//Condizione di inzio; condizione di arresto, dimensione dell'avanzamento (a passi di)
	for (celsius = start; celsius <= end; celsius += step) {
		fahraneith = (celsius * 9/5) + 32;
		fmt::print("{:>6.1f} {:>7.2f} \n", celsius, fahraneith);
		//usleep(1e5);
		this_thread::sleep_for(50ms);
		fprintf(stdout, "\033[A\33[2KT\r");	}
	
	
	return 0;
}
