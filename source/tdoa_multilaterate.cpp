// Work in progress!

std::pair multilaterate(const double &delay1, const double &delay2, const double &delay3, 
                   const double &psuedorange, const double &velocity
                   const double &receiver1x, const double &receiver1y const double &receiver2x, const double &receiver2y
                   const double &receiver3x, const double &receiver3y){

  double thld;
  std::pair<int, int> coordinates;

  for(int i = 0; i < psuedorange; ++i){
    for(int j = 0; j < psuedorange; ++j){
    
      double travel1 = sqrt() / velocity;
      double travel2 = 
      double travel3 = 
      
      if( std::max( std::max( fabs((travel1-travel2) - delay1), fabs((travel1-travel3) - delay2) ), fabs((travel2-travel3) - delay3) ) -
          std::min( std::min( fabs((travel1-travel2) - delay1), fabs((travel1-travel3) - delay2) ), fabs((travel2-travel3) - delay3) ){
          
          thld = std::max( std::max( fabs((travel1-travel2) - delay1), fabs((travel1-travel3) - delay2) ), fabs((travel2-travel3) - delay3) ) -
          std::min( std::min( fabs((travel1-travel2) - delay1), fabs((travel1-travel3) - delay2) ), fabs((travel2-travel3) - delay3) );
          
          coordinates.first = i; coordinates.second = j;
          
      }
    
    } 
  
  }
  
  return coordinates;

}
