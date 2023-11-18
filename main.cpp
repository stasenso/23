
#include <xmmintrin.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    __int128 GetNum (ListNode *head){
        __int128 inum=0;
        unsigned long long Range=1;
        ListNode *curr=head;  
        do
        {
            inum=inum+curr->val*Range;
            curr=curr->next;
            Range*=10;
        }
        while (curr!=nullptr);
        return inum;
        
    }
    ListNode* SetNum (__int128 Num){
        __int128 iNum=Num;
        long double ftmp=static_cast<long double>(Num)/10;
        ftmp=ftmp-static_cast<unsigned long long>(ftmp);
        int itmp=static_cast<int>(ftmp*10+0.005);
        ListNode *head=new ListNode(itmp);
        iNum=(iNum-itmp)/10;
        if (iNum==0){
            head->next=nullptr;
            head->val=itmp;             
            return head;
        }
        else{
            head->val=itmp;
            head->next=SetNum (iNum);
            return head;
        }
        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        __int128 firstNum=GetNum(l1);
        __int128 secNum=GetNum(l2);
        firstNum+=secNum;
        return SetNum (firstNum);                 
    }
};
int main(int argc, char const *argv[])
{
    Solution sl;

    ListNode *v3=new ListNode(4);
    ListNode *v1=new ListNode(6,v3);
    ListNode *v0=new ListNode(5,v1);


    ListNode *d29=new ListNode(1);
    ListNode *d28=new ListNode(0,d29);
    ListNode *d27=new ListNode(0,d28);
    ListNode *d26=new ListNode(0,d27);
    ListNode *d25=new ListNode(0,d26);
    ListNode *d24=new ListNode(0,d25);
    ListNode *d23=new ListNode(0,d24);
    ListNode *d22=new ListNode(0,d23);
    ListNode *d21=new ListNode(0,d22);
    ListNode *d20=new ListNode(0,d21);
    ListNode *d19=new ListNode(0,d20);
    ListNode *d18=new ListNode(0,d19);
    ListNode *d17=new ListNode(0,d18);
    ListNode *d16=new ListNode(0,d17);
    ListNode *d15=new ListNode(0,d16);
    ListNode *d14=new ListNode(0,d15);
    ListNode *d13=new ListNode(0,d14);
    ListNode *d12=new ListNode(0,d13);
    ListNode *d11=new ListNode(0,d12);
    ListNode *d10=new ListNode(0,d11);
    ListNode *d9=new ListNode(0,d10);
    ListNode *d8=new ListNode(0,d9);
    ListNode *d7=new ListNode(0,d8);
    ListNode *d6=new ListNode(0,d7);
    ListNode *d5=new ListNode(0,d6);
    ListNode *d4=new ListNode(0,d5);
    ListNode *d3=new ListNode(0,d4);
    ListNode *d2=new ListNode(0,d3);
    ListNode *d1=new ListNode(0,d2);
    ListNode *d0=new ListNode(1,d1);
    sl.addTwoNumbers (v0,d0);
    return 0;
}
