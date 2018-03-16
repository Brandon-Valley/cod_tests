
#include <iostream>
#include <string>
#include <typeinfo>

//#include <string> // optional with modern GCC installs
using std::string;
using namespace std;

//template <typename a>
//struct Position
//{
//    a direction;
//    double degrees;
//};

//template <typename T>
//string all_to_string(T var);



struct test_case
{
    string lable;             	//need
    string data;				//need
    int max_data_chars = 10;
    string alignment_type = "right";
    string lable_data_seperation_spacing = " ";
    string lable_data_seperation_str = ":";
};

string make_aligned_str(string data, int max_data_chars, string alignment_type);
void display_test_cases(test_case test_cases[], int num_test_cases, string pre_spaces, string between_str, string post_str, string print_type);

void display_test_cases(test_case test_cases[], int num_test_cases, string pre_spaces = "  ",
						string between_str = "   " , string post_str = "", string print_type = "one line")
{
	string tc_strings[num_test_cases];

	for (int i = 0 ; i < num_test_cases ; i++)
	{
		test_case tc = test_cases[i];

		string tc_str = tc.lable + tc.lable_data_seperation_str + tc.lable_data_seperation_spacing;
		tc_str.append( make_aligned_str(tc.data, tc.max_data_chars, tc.alignment_type));
		tc_strings[i] = tc_str;
	}

	//display
	if (print_type == "one line")
		cout << pre_spaces;

	for (int i = 0 ; i < num_test_cases ; i++)
	{
		if 		(print_type == "one line")
			cout << tc_strings[i] + between_str;
		else if (print_type == "one case per line")
			cout << pre_spaces + tc_strings[i] << endl;
		else
			cout << "YOU MISSPELLED PRINT_TYPE" << endl;
	}

	cout << post_str << endl;
}

string make_aligned_str(string data, int max_data_chars, string alignment_type)
{
	if (max_data_chars < data.length())
		return "YOUR DATA IS LONGER THAN YOUR MAX_DATA_CHARS";

	string result = data;

	while(result.length() < max_data_chars)
	{
		if 		(alignment_type == "left")
			result += " ";
		else if (alignment_type == "right")
			result.insert(0," ");
		else
			result = "YOU MISSPELLED THE ALIGNMENT TYPE";
	}
	return result;
}




int main()
{
	cout << "hi there" << endl;
	char c1 = 'g';
	string s;
	s += c1;

	test_case tc1 = {"data1" , to_string(32)};
	test_case tc2 = {"data2", "str data"};
	test_case tc3 = {"data3",  s, 10, "right"};

	string l = "data1";
//	test_case tc1 = make_test_case(l, 32);


	cout << tc1.lable << tc1.data << "  .LLLLjgvjjy " << tc1.max_data_chars << endl;

	test_case test_cases[] = { tc1, tc2, tc3 };
	display_test_cases(test_cases, 3);
	display_test_cases(test_cases, 3, "  ", "   ", "", "one case per line" );

}
