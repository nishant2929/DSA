//         unordered_map<vector<int>v[words[i].size()],int> mp;
//         for(int i=0;i<words.size();i++){
//             vector<int>temp;
//             for(int j=1;j<words[i].size();j++){
//                 v.push_back(words[i][j]-words[i][j-1]);
//             }
//           if(mp.empty()){
//               mp[temp]+= i;
//           }else{
//               if(mp.find(temp)!=mp.end()){
//               }
//           }
//         }
//        map<vector<int>,vector<string>> mp;
//         for(int i=0;i<words.size();i++){
//              vector<int>temp;
//              for(int j=1;j<words[i].size();j++){
//                  temp.push_back(words[i][j]-words[i][j-1]);
//     }
//          mp[temp].push_back(words[i]);
// }
//         for(auto it : mp){
//             if(it.second.size()==1){
//                 return it.second[0];
//             }
//         }
//         return "";