
class MyHashSet {
public:
    vector<int> v[1000];
    MyHashSet() {
        
    }
    
    
    
    void remove(int key) {
     
      int x=-1;
     for(int i=0;i<v[key%1000].size();i++){
         
         if(v[key%1000][i]==key){
             x=i;
             break;
         }
     }
        if(x==-1){
            return ;
        }
        vector<int> temp;
        for(int i=0;i<v[key%1000].size();i++){
         
         if(i!=x){
             temp.push_back(v[key%1000][i]);
         }
     }
        
        for(int i=0;i<temp.size();i++){
          
        }
        
     
        v[key%1000]=temp;
        return ;
        
    }
    
    bool contains(int key) {
  
        for(int i=0;i<v[key%1000].size();i++){
            
         if(v[key%1000][i]==key){
             return true;
             
         }
           
     }
        
        return false;
    }
    void add(int key) {
        if(contains(key)){
           return ; 
        }
        v[key%1000].push_back(key);
    }
};
