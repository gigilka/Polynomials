#pragma once
struct Monom {
	double k;
	int x, y, z;
	bool operator==(const Monom& m) {
		if (k == m.k && x == m.x && y == m.y && z == m.z) {
			return true;
		}
		return false;
	}
	bool operator<(const Monom& m) {
		if (x == m.x && y == m.y && z == m.z) {
			if (k < m.k) {
				return true;
			}
		}
		if ((x < m.x) || (x == m.x && y < m.y) || (x == m.x && y == m.y && z < m.z)) {
			return true;
		}

		return false;
	}
	bool operator!=(const Monom& m) {
		return !(operator==(m));
	}
	bool operator>(const Monom& m) {
		return !(operator<(m));
	}
};

template <class T>
struct Tnode {
	T val;
	Tnode* pNext;

};
template <class T>
class TList {
protected:
	Tnode<T> *pFirst, *pCurr, *pPrev, *pLast, *pStop;
	int len;
public:
	Tlist() {
		len = 0;
		pFirst = NULL;
		pCurr = NULL;
		pPrev = NULL;
		PLast = NULL;
		pStop = NULL;
	}
	IsEmpty() {
		if (len == 0 || pFirst == pStop);
	}
	InsFirst(T v) {
		Tnode<T>* newnode = new Tnode<T>();
		newnode->val=v;
		newnode->pNext = pFirst;
		pFirst = newnode;
		len++;
		
	}
	InsLast(T v) {
		if (len != 0) {
			Tnode<T>* newnode = new Tnode<T>();
			newnode->val = v;
			PLast->pNext = newnode;
			PStop = newnode;
			pLast = newnode;
			len++;
		}
		else {
			InsFirst(value);
		}
	}

};