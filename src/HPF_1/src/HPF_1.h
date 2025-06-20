#ifndef FILTER_HPF_1
#define FILTER_HPF_1

#include "../../../../Constants/src/Constants.h"

template <typename T>
class HPF_1
{
	public:
		HPF_1();
		void init(T fc_, T dt_);
		void set_param(T fc_, T dt_);
		T update(T x_k);
		void reset();

		void set_fc(T fc_);
		void set_tau(T tau_);
		void set_dt(T dt_);
		void set_alpha(T alpha_);
		
		T get_fc();
		T get_tau();
		T get_dt();
		T get_alpha();

	private:
		T fc = 0.0;
		T tau = 0.0;
		T dt = 0.0;
		T alpha = 0.0;

		T x_k_1 = 0.0;
		T y_k_1 = 0.0;
		bool start = true;
};

#include "HPF_1.tpp"

#endif