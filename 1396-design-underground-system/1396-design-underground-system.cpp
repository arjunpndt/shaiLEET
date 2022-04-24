class UndergroundSystem {
public:
    struct travellerDet{
        int Id;
        string checkInStation;
        int checkInTime;
    };
    
    vector<travellerDet> details;
    map<string, vector<int>*> avgTime;
    
    UndergroundSystem() {
        avgTime.clear();
        details.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        
        travellerDet tempNode;
        
        tempNode.Id = id;
        tempNode.checkInStation = stationName;
        tempNode.checkInTime = t;
        
        details.push_back(tempNode);
    }
    
    void checkOut(int id, string stationName, int t) {
        int i = 0;
        for(auto detail : details){
            if(id == detail.Id){
                if(avgTime.count(detail.checkInStation + "_" + stationName) == 0){
                    vector<int>* myV = new vector<int>;
                    myV->push_back(t-detail.checkInTime);
                    avgTime[detail.checkInStation + "_" + stationName] = myV;
                    
                } else{
                    vector<int>* temp = avgTime[detail.checkInStation + "_" + stationName];
                    temp->push_back(t-detail.checkInTime);
                    avgTime[detail.checkInStation + "_" + stationName] = temp;
                }
                details.erase(details.begin() + i);
                break;
            }
            i++;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        vector<int>* temp = avgTime[startStation + "_" + endStation];
        int size = temp->size();
        int sum = accumulate(temp->begin(), temp->end(), 0);
        
        return double(sum)/size;
    }
};