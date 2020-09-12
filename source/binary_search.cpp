size_t binarySearch(const std::vector<T> &vec, const double key){
  
  unsigned int high = vec.size();
  unsigned int low  = 0;
  unsigned int mid;
  
  while(low <= high){
    
      mid = low + (high - low) / 2;
    
    if(vec[mid] == key) return mid;
    if(vec[mid]  < key) low = mid + 1;
    else                high = mid - 1;
    
  }
  
  return mid;
  
}
