  START
  ↓
Initialize head = NULL
  ↓
Display Menu
  ↓
Enter Choice
  ↓
Choice = 1? ── YES → Create New Node → Enter Token Number → Is head = NULL?
                                      ↓ YES                 ↓ NO
                                  head = newNode       Traverse to Last Node
                                      ↓                     ↓
                                      └────────────→ Link newNode at End
                                                        ↓
                                             Display "Token Added"
                                                        ↓
                                                   Back to Menu
  ↓ NO
Choice = 2? ── YES → Is head = NULL?
                         ↓ YES              ↓ NO
                 Display "No Tokens"   Store First Token
                         ↓              Move head to Next Node
                         ↓              Delete Served Node
                         ↓              Display "Token Served"
                         └──────────────→ Back to Menu
  ↓ NO
Choice = 3? ── YES → Enter Token to Search → Set temp = head
                                      ↓
                              Is temp = NULL?
                              ↓ YES        ↓ NO
                       "Token Not Found"  Compare Token
                              ↓              ↓
                       Back to Menu    Token Found?
                                      ↓ YES      ↓ NO
                               "Token Pending"  temp = temp->next
                                      ↓              ↓
                                Back to Menu   Repeat Search
  ↓ NO
Choice = 4? ── YES → Is head = NULL?
                         ↓ YES              ↓ NO
                 "No Pending Tokens"    Set temp = head
                         ↓                  ↓
                    Back to Menu      Display Token
                                           ↓
                                    temp = temp->next
                                           ↓
                                    Repeat until NULL
                                           ↓
                                      Back to Menu
  ↓ NO
Choice = 5?
  ↓ YES
STOP
