#include<vector>
#include<string.h>

namespace car_loan{
	enum Type{
		Normal, Truck, Semi_Truck, Luxury
	};
	struct Car_loaned{
	
		private:
		std::vector<Type> car_type;
		std::vector<std::string> car_plate;
		std::vector<unsigned int> current_loaner_cpf;
		std::vector<std::string> current_loaner_first_name;
		std::vector<std::string> current_loaner_last_name;
		std::vector<std::wstring> transaction_detail;
		std::vector<std::wstring> car_detail;
		std::vector<unsigned char> loan_init_date;
		std::vector<unsigned char> loan_end_date;
		std::vector<unsigned int> price; ///????

		public:

		///Implement search algorithm based on the params, implement setters and getters, implement loan increase and decrease sub-routines,
		//implement sorting based on params	

	};

	struct Car_free{

		private:
		std::vector<Type> car_type;
		std::vector<std::string> car_plate;
		std::vector<std::wstring> car_detail;

		public:

		///Implement searching algorithms based on params, implement setters and getters

	};

	///In namespace implement...
	//
	//loan subroutine that removes car from "Car_free" to "Car_loaned" without conflict
	//un-loan subroutune that removes car from "Car_loaned" to "Car_free" without conflict
	//search algorithm that searches on both strutures based on params
}

namespace staff{

	enum Staff_task{
		Task1 , Task2 , Task3
	};

	enum Staff_location{
		Location1 , Location2 , Location3
	};

	struct Staff_active{
		
		private:
		std::vector<Staff_location> location;
		std::vector<std::string> first_name;
		std::vector<std::string> last_name;
		std::vector<Staff_task> task;
		std::vector<unsigned int> salary;
		std::vector<unsigned int> staff_cpf;

		public:

		///Implement search algorithm, sort algorithm , and single or multiple staff re-alocation based on params (location or task)

	};

	struct Staff_inactive{
		
		private:
		std::vector<Staff_location> relative_location;	///Not working but near a location
		std::vector<std::string> first_name;
		std::vector<std::string> last_name;
		std::vector<Staff_task> task;
		//std::vector<unsigned int> salary;
		std::vector<unsigned int> staff_cpf;

		public:

		///Implement search algorithm, sort algorithm , and single or multiple staff re-alocation based on params (location or task)
	};

	///In namespace implement...
	//Sub-routine to change staff from inactive to active and vice versa without conflict
	//Sub-routine to change params of active and inactive staff based on params (location or task)

};
