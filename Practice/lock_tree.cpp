#include <bits/stdc++.h>

using namespace std;
struct Node
{
  string name;
  bool locked;
  long uid;

  vector<Node *> world;
  Node *ancestor;
  set<Node *> lockedChild; // set not vector, because same node can be operated twice

  Node(string name, Node *anc);
  void add(vector<string> &world);
};
Node::Node(string name, Node *anc)
{
  this->name = name;
  this->uid = INT_MIN;
  this->ancestor = anc;
  this->locked = false;
}
void Node::add(vector<string> &world)
{
  for (auto &place : world)
  {
    this->world.push_back(new Node(place, this));
  }
}

struct WorldTree
{
  long m;
  Node *root;
  unordered_map<string, Node *> worldsNames;

  // util
  WorldTree(long m, string name);
  void spawn(vector<string> &worlds);
  void print(Node *n);

  // ops
  bool lock(string name, long uid);
  bool unlock(string name, long uid);
  bool upgradeLock(string name, long uid);
};
WorldTree::WorldTree(long m, string name)
{
  this->m = m;
  this->root = new Node(name, NULL);
}
void WorldTree::spawn(vector<string> &worlds)
{
  long deg = this->m; // degree of world nodes
  long level = 1;     // level 0 is for root, the init Node for world
  long currWorld = 0; // itr indx to world array
  long n = worlds.size();

  // do level order traversal
  queue<Node *> q;
  q.push(this->root);
  while (!q.empty())
  {
    Node *tmp = q.front();
    q.pop();
    this->worldsNames[tmp->name] = tmp;
    vector<string> subWorlds;
    for (currWorld = level; currWorld < min(n, level + deg); currWorld++)
    {
      subWorlds.push_back(worlds[currWorld]);
    }
    tmp->add(subWorlds);
    for (Node *subWorld : tmp->world)
    {
      q.push(subWorld);
    }
    level = currWorld;
  }
}

bool WorldTree::lock(string name, long uid)
{
  Node *currNode = this->worldsNames[name];
  // check premise 1 || premise 3
  if (currNode->locked || currNode->lockedChild.size())
  {
    return false;
  }
  // check premise 2
  Node *ances = currNode->ancestor;
  while (ances != NULL)
  {
    // prevent lock aquisition if ancestor is locked
    if (ances->locked)
    {
      return false;
    }
    ances = ances->ancestor;
  }

  // aquire lock
  currNode->locked = true;
  currNode->uid = uid;

  Node *_ances = currNode->ancestor;
  while (_ances != NULL)
  {
    // update ancestors->lockedChild
    _ances->lockedChild.insert(currNode);
    _ances = _ances->ancestor;
  }
  return true;
}
bool WorldTree::unlock(string name, long uid)
{
  Node *currNode = this->worldsNames[name];
  // check premise 1: uid must acquire lock first
  if (!currNode->locked || currNode->uid != uid)
  {
    return false;
  }

  // unlock
  currNode->locked = false;
  currNode->uid = INT_MIN;

  Node *_ances = currNode->ancestor;
  while (_ances != NULL)
  {
    // update ancestors->lockedChild
    _ances->lockedChild.erase(currNode);
    _ances = _ances->ancestor;
  }
  return true;
}

// sigsegv :(
bool WorldTree::upgradeLock(string name, long uid)
{
  // this->print(root);

  // similar to lock , but premise 3 is changed;
  Node *currNode = this->worldsNames[name];

  // check premise 1 || premise 3
  // if all Childs are to be locked by same uid, the lockedChild.sz > 0
  if (currNode != NULL && (currNode->locked || currNode->lockedChild.size() == 0))
  {
    return false;
  }

  // check if decendants are locked by same uid
  // decendant unlocked valid(?)
  if (currNode->lockedChild.size() > 0)
  {
    for (Node *decendant : currNode->lockedChild)
    {
      if (decendant->uid != uid)
      {
        return false;
      }
    }
  }

  // prevent lock aquisition if ancestor is locked
  Node *ances = currNode->ancestor;
  while (ances != NULL)
  {
    if (ances->locked)
    {
      return false;
    }
    ances = ances->ancestor;
  }

  // If current node is acquiring lock, then no childs should be locked
  // (inferred from premises of lock, to maintain locking consistency)
  if (currNode->lockedChild.size() > 0)
  {
    for (Node *decendant : currNode->lockedChild)
    {
      unlock(decendant->name, uid);
    }
  }

  // all premises for lock are satisfied, proceed to lock
  lock(currNode->name, uid);
  return true;
}

void WorldTree::print(Node *n)
{
  if (!n)
  {
    return;
  }
  cout << "P:" << n->name << " " << n->locked << " " << "\n";
  cout << "c: -\n";
  if (n->world.size() > 0)
  {
    for (Node *c : n->world)
    {
      cout << "\t" << c->name << "\n";
    }
  }

  cout << "lock c: -\n";
  if (n->lockedChild.size() > 0)
  {
    for (Node *c : n->lockedChild)
    {
      cout << "\t" << c->name << "\n";
    }
  }

  cout << "------------------------\n";

  if (n->world.size() > 0)
  {
    for (Node *c : n->world)
    {
      print(c);
    }
  }
  cout << "==========================\n";
}

int main()
{
  long N, m, Q;
  cin >> N >> m >> Q;

  vector<string> nodeName(N);

  for (long i = 0; i < N; i++)
  {
    cin >> nodeName[i];
  }

  WorldTree *world = new WorldTree(m, nodeName[0]);
  world->spawn(nodeName);
  // world->print(world->root);

  while (Q--)
  {
    long opcode, uid;
    string name;

    cin >> opcode >> name >> uid;
    if (opcode == 1 && world->lock(name, uid))
    {
      // world->print(world->root);
      cout << "true\n";
    }
    else if (opcode == 2 && world->unlock(name, uid))
    {
      // world->print(world->root);
      cout << "true\n";
    }
    else if (opcode == 3 && world->upgradeLock(name, uid))
    {
      // world->print(world->root);
      cout << "true\n";
    }
    else
    {
      // world->print(world->root);
      cout << "false\n";
    }
    // world->print(world->root);
  }
  return 0;
}
