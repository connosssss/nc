class Solution {
    unordered_map<int, vector<int>> courses;
    unordered_set<int> seen; 
    unordered_set<int> safe;     
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for(const auto& c : prerequisites){
            courses[c[0]].push_back(c[1]);
        }

        for(int i = 0; i < numCourses; ++i){
            if (!dfs(i)) return false;
        }

        return true;
    }

    bool dfs(int course){
        if (safe.contains(course)) return true;
        if (seen.contains(course)) return false;
        seen.insert(course);

     
        for(auto neighbor : courses[course]) {
            if (!dfs(neighbor)) return false; 
        }

       
        seen.erase(course);
        safe.insert(course);

        return true;
    }
};