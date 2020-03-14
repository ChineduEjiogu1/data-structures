#include <iostream>
#include <string>

std::string timeConvert(std::string s)
{
  int hr = 0, hr2 = 0; 
  int min = 0, min2 = 0;
  int sec = 0, sec2 = 0;

  for(int currI = 0; currI < s.size(); currI++){
    if(s[currI] == 'P' || s[currI] == 'p'){
      
      if(s[0] - '0' == 0 )
        hr = s[0] = ('1' - '0');
      
      else if(s[0] - '0' == 1){
        hr = s[0] = ('2' - '0');
      }

      if (s[1] - '0' < 8)
        hr2 = (s[1] - '0') + ('2' - '0');
      
      else if(s[1] - '0' >= 8 && s[0] - '0'){
        hr = (s[0] = '2' - '0');
        hr2 = (s[1] - '0')  - ('8' - '0');
      }

      if(hr == '2' - '0' && hr2 == '4' - '0'){
        hr = hr - ('1' - '0');
        hr2 = hr2 - ('2' - '0');
      }
    }
    // minutes --
    if(s[3] - '0' < 6)
      min = s[3] - '0';
    if(s[3] - '0' > 5)
      min = s[3] - '0' - (s[3] - '0');
    if(s[4] - '0' <= 9)
      min2 = s[4] - '0';

    // seconds --
    if(s[6] - '0' < 6)
      sec = s[6] - '0';
    if(s[3] - '0' > 5)
      sec = s[6] - '0' - (s[6] - '0');
    if(s[7] - '0' <= 9)
      sec2 = s[7] - '0';
    

  }

  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'A' || s[i] == 'a'){
      
      if(s[0] - '0' == 0 && s[1] - '0' < 10){
        hr = s[0] - '0';
        hr2 = s[1] - '0';
      }

      if(s[0] - '0' == 1){
        hr = s[0] - '0';
        hr2 = s[1] - '0';
      }

      if(hr == '1' - '0' && hr2 == '2' - '0'){
        hr = hr - ('1' - '0' );
        hr2 = hr2 - ('2' - '0');
      }
    }

    // minutes --
    if(s[3] - '0' < 6)
      min = s[3] - '0';
    if(s[3] - '0' > 5)
      min = s[3] - '0' - (s[3] - '0');
    if(s[4] - '0' <= 9)
      min2 = s[4] - '0';

    // seconds --
    if(s[6] - '0' < 6)
      sec = s[6] - '0';
    if(s[3] - '0' > 5)
      sec = s[6] - '0' - (s[6] - '0');
    if(s[7] - '0' <= 9)
      sec2 = s[7] - '0';
  }
  
  std::string r = std::to_string(hr)  + std::to_string(hr2) + ':' + std::to_string(min) + std::to_string(min2) + ':' + std::to_string(sec) + std::to_string(sec2);
  return r;
} 

int main() {
  std::string time = "11:27:45AM";
  
  std::cout << timeConvert(time) << '\n';

  return 0;
}