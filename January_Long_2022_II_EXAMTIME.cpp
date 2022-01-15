// CodeChef January Long challenge 2022 II Division 3 (Rated)
// Problem Vivision 03
// 1* Coder in CodeChef Till 16/01/2022 
// Problem Name: TCS Examination
// Problem Code: EXAMTIME
// Problem Link: https://www.codechef.com/JAN222C/problems/EXAMTIME

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int Dragon_DSA,Dragon_TOC,Dragon_DM,Sloth_DSA,Sloth_TOC,Sloth_DM,Dragon,Sloth;
	    cin>>Dragon_DSA>>Dragon_TOC>>Dragon_DM;
	    cin>>Sloth_DSA>>Sloth_TOC>>Sloth_DM;
	    Dragon=Dragon_DSA+Dragon_TOC+Dragon_DM;
	    Sloth=Sloth_DSA+Sloth_TOC+Sloth_DM;
	    if(Dragon==Sloth)
	    {
	        if(Dragon_DSA==Sloth_DSA)
	        {
	            if(Dragon_TOC==Sloth_TOC)
	            {
	                std::cout << "TIE" << std::endl;
	            }else if(Dragon_TOC>Sloth_TOC)
	            {
	                std::cout << "DRAGON" << std::endl;
	            }
	            else
	            {
	                std::cout << "SLOTH" << std::endl;
	            }
	        }else if(Dragon_DSA>Sloth_DSA)
	        {
	            std::cout << "DRAGON" << std::endl;
	        }else
	        {
	                std::cout << "SLOTH" << std::endl;
	        }
	    }else if(Dragon>Sloth)
	    {
	        std::cout << "DRAGON" << std::endl;
	    }else
	    {
	        std::cout << "SLOTH" << std::endl;
	    }
	}
	return 0;
}
