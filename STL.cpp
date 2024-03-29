MAPS
header: <map>

map<char, int> m;                          initialize map of size 0
m.clear()                                  removes all elements of map
m.size()                                   return size of map
m.empty()                                  returns true if map is empty
m.begin() , m.end()                        iterators
                                           map<char,int>::iterator i;  //initialize iterator
                                           for (i=m.begin(); i!=m.end(); ++i)
                                              cout << i->first << " => " << i->second << '\n';

                                            //prints key value pairs in the format "key=>value"
m['k']                                     returns value corresponding to key 'k' if the key exists, else returns reference 
                                           to new element
m.find('k')                                returns value corresponding to key 'k'
m.count('k')                               return 1 if key 'k' exixts in the map, else returns 0
m.insert(pair<char,int>('k',v));           insert an element with key 'k' and value 'v'
m['k']=v                                           
m.erase('k')                               erases element with key 'k'
                                           it=mymap.find('b');
                                           mymap.erase (it);                   // erasing by iterator

                                           mymap.erase ('c');                  // erasing by key

                                           it=mymap.find ('e');
                                           mymap.erase ( it, mymap.end() );    // erasing by range

STACK
header: <stack>
stack<int> s;   initialize stack
s.push()			  push an element
s.pop()			    pop element(does not return)
s.top()			    returns topmost element of the stack
s.size()			  returns number of elements
s.empty()		    returns true if stack is empty


QUEUE
header: <queue>
queue<int> q;   initialize queue
q.push()			  pushes element to back/rear
q.pop()			    removes the first element inserted
q.front()			  returns the front element of the queue
q.back()			  returns the rear element of the queue
q.size()			  returns number of elements
q.empty()       returns true if queue is empty


PRIORITY QUEUE
Priority queue is just like a normal queue except the element removed from the queue is always the greatest among all the elements in the queue

priority_queue<int> pq
pq.push()		  pushes an element
              *************************************
              pq1.push(30);  // inserts 30 to pq1 , now top = 30
              pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
              pq1.push(90);  // inserts 90 to pq1 , now top = 90  
              pq1.push(60);	// inserts 60 to pq1 , top still is 90	
              **************************************
pq.pop()			removes the topmost(greatest) element 
pq.top()			returns the topmost(greatest) element
pq.size()     returns number of elements
pq.empty()    returns true is priority queue is empty

LISTS
*************INITIALISATION******************
list<int> myList{1,2,3};
   /* creates list with 1,2,3 in it */

   list<int> myNewList = 1;
   /* create list myNewList of integer 
     and copies value of 1 into it*/
     
**************** INSERTION*******************
  list<int> l = {1,2,3,4,5};
  list<int>::iterator it = l.begin();           

  l.insert (it+1, 100);  // insert 100 before 2 position
  /* now the list is 1 100 2 3 4 5 */
  
  list<int> new_l = {10,20,30,40}; // new list 

  new_l.insert (new_l.begin() , l.begin(), l.end());
  /* insert elements from beginning of list l to end of list l 
    before 1 position in list new_l */
  
  /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 */

  l.insert(l.begin() , 5 , 10);  // insert 10 before beginning 5 times 
  /* now l is 10 10 10 10 10 1 100 2 3 4 5 */ 
  
  ******************PUSH/POP********************
  list<int> l{1,2,3,4,5};
   
   l.pop_back()();
   /* now the list becomes 1,2,3,4 */
   
   l.pop_front()();
   /* now the list becomes 2,3,4 */
   
   
   l.empty()          returns true if list is empty
   l.size()           returns size
   l.front()          returns first element from front
   l.back()           returns first element from back
   l.reverse()        reverse a list
   l.sort()           sorting a list
   list1.merge(list2) merging
  
  
  DEQUE
  deque< object_type > deque_name;
  
  ****************INSERTION***********************
  int a[] = { 1,5,8,9,3 };
  deque<int> dq(a, a+5);
  /* creates s deque with elements 1,5,8,9,3  */


  dq.push_back(10);
  /* now dq is : 1,5,8,9,3,10 */
 
  dq.push_front(20);
  /* now dq is : 20,1,5,8,9,3,10  */

  deque<int>::iterator i;

  i=dq.begin()+2;
  /* i points to 3rd element in dq */

  dq.insert(i,15);
  /* now dq 20,1,15,5,8,9,3,10  */

  int a[]={7,7,7,7};

  d1.insert(dq.begin() , a , a+4 );
  /* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */
  
  **********************DELETION*****************************
  int a[] = { 1,5,8,9,3,5,6,4 };
  deque<int> dq(a,a+8);
  /* creates s deque with elements 1,5,8,9,3,5,6,4  */


   dq.pop_back();
   /* removes an element from the back */
   /* now the deque dq is : 1,5,8,9,3,5,6 */
 
   dq.pop_front();
   /* now dq is : 1,5,8,9,3,5,6  */
   
   dq.empty()
   dq.size()
   
   
   VECTORS
   vector< object_type > vector_name;
   
   ************INITIALISATION*****************
   std::vector<int> my_vector;    
   std::vector<string> v {"Pankaj" , "The" , "Java" ,"Coder"};
   std::vector<string> v(v1.begin(), v1.end());                   //Copy from v1 to v
   std::vector<string> v(4 , "test");                             //initialises 4 elements as test
   
   ******************INSERT*********************
   vector<int>iterator i = v.begin()
   v.insert(i,70)                         //inserts 70 at front
   v.insert(i,2,70)                       //inserts 70 2 times
   v.insert(i,v2.begin(),v2.end())        //inserts vector v2
   
   ******************ERASE**********************
   vecto<int>v1 {10,20,30,40};
   vector<int>iterator:: it = v.begin();
  
   v.erase(it);   //removes first element from the vector

   v.erase(v1.begin(), v1.end() - 2 )  
   /*removes all the elements except last two */

   for(it = v.begin(); it != v.end(); it++) {
      cout << *it <<" ";   // for printing the vector
   /* Output : 30 40 */
   
   v.push_back(x)             //insert x at end
   v.pop_back()               //removes last elemet
   v.front()                  //returns first element
   v.back()                   //returns last element
   v.clear()                  //clears vector