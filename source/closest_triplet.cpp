/*
 * Copyright © 2020 Keith Madison
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and 
 * associated documentation files (the “Software”), to deal in the Software without restriction, 
 * including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, 
 * subject to the following conditions:

 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
 * IN THE SOFTWARE.
 *
 */
 
void findClosest(std::vector<T> vecOne, std::vector<T> vecTwo, std::vector<T> vecThree) {

    std::vector<std::vector<T>> triples;
    for(auto val : vecOne){

        T first, second;
        auto geq = std::lower_bound(vecTwo.begin(), vecTwo.end(), val);

        if(std::min(tstamp - *geq, tstamp - *(--geq)) == tstamp - *geq){
            first = *geq;
        } else {
            first = *leq;
        }

        geq = std::lower_bound(vecThree.begin(), vecThree.end(), val);

        if(std::min(tstamp - *geq, tstamp - *(--geq)) == tstamp - *geq){
            second = *geq;
        } else {
            second = *leq;
        }

        triples.push_back({tstamp, first, second, std::max(tstamp,first,second) - std::min(tstamp,first,second)});

    }

    std::sort(triples.begin(), triples.end(),
              [&](std::vector<T>& A, std::vector<T>& B){
                A[4] < B[4];
    });
    
    std::unsorted_set<T> cache;
    std::vector<std::vector<T>> sorted_triples;
    for(auto triple : triples){
        if(std::find(cache.begin(), cache.end(), triple[1]) == cache.end()\
            && std::find(cache.begin(), cache.end(), triple[2]) == cache.end()){
                sorted_triples.push_back(triple);
                cache.insert(triple[1]); cache.insert(triple[2]);
        }
    }
    
    return sorted_triples;
    
}
