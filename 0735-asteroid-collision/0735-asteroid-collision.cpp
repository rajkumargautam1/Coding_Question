class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> s;

	// time : O(n) space : O(n)

	for (int ast : asteroids) {
		if (ast < 0 and !s.empty() and s.top() > 0) {
			// collision
			bool flag = true; // assume current asteroid 'ast' will be not be destroyed
			while (!s.empty() and s.top() > 0) {
				if (s.top() < abs(ast)) {
					// asteroid on top of the stack will be destroyed
					s.pop();
				} else if (s.top() > abs(ast)) {
					// current asteroid 'ast' will be destroyed
					flag = false;
					break;
				} else { // s.top() == abs(ast)
					// asteroid on top of the stack and current asteroid 'ast' will be destroyed
					s.pop();
					flag = false;
					break;
				}
			}
			if (flag == true) {
				s.push(ast);
			}
		} else {
			// no collision
			s.push(ast);
		}
	}

	vector<int> out;

	while (!s.empty()) {
		out.push_back(s.top());
		s.pop();
	}

	reverse(out.begin(), out.end());

	return out;
    
    }
};