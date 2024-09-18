/* 394. Decode String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/decode-string/submissions/1394737710/ */

int chrtoi(char c) {
    switch (c) {
        case '0':return 0;break;
        case '1':return 1;break;
        case '2':return 2;break;
        case '3':return 3;break;
        case '4':return 4;break;
        case '5':return 5;break;
        case '6':return 6;break;
        case '7':return 7;break;
        case '8':return 8;break;
        case '9':return 9;break;
        default:
        return -1;
        break;
    }
    return -1;
}

typedef struct {
    int strtidx;
    int endidx;
    int lastidx;
} NESTRANGE;


NESTRANGE findnext(char* s, char* arr, int* idx,int idxpart) {
        int j = 0;

        int len = strlen(s);
        NESTRANGE currnode;
        currnode.strtidx = -1;
        currnode.endidx = 0;
        currnode.lastidx = 0;
        NESTRANGE nestnode;
        nestnode.strtidx = -1;
        nestnode.endidx = 0;
        nestnode.lastidx = 0;

    bool thisloop = true;

    for (int i = idxpart; i < len; i++ ) {
        if (chrtoi(s[i]) != -1) {
            if (currnode.strtidx == -1) currnode.strtidx = (*idx);
            if(thisloop) {
                j = (j*10) + chrtoi(s[i]);
            } else {
                nestnode = findnext(s, arr, idx, i);
                i = nestnode.lastidx;
            }
        } else if(s[i] == '[') {// -1
            thisloop = false;
        } else if(s[i] == ']') {// 1
                j--;
                int endidx = (nestnode.endidx == 0 ? currnode.endidx : nestnode.endidx);

                while (j > 0) {
                    for (int k = currnode.strtidx; k < (currnode.endidx > nestnode.endidx ? currnode.endidx : nestnode.endidx) ; k++) {
                        arr[(*idx)++] = arr[k];
                    }
                    j--;
                }
                currnode.endidx = (*idx);
                currnode.lastidx = i;
                break;
        } else {
            if (currnode.strtidx == -1) currnode.strtidx = (*idx);
                arr[(*idx)++] = s[i];
                currnode.endidx = (*idx);
        }
    }
    return currnode;
}

char* decodeString(char* s) {
    char* arr = malloc(sizeof(char)* 100000);
    int idx = 0;
    int len = strlen(s);
    NESTRANGE orgnode;
    orgnode.strtidx = 0;
    orgnode.endidx = 0;
    orgnode.lastidx = 0;

    int i = 0;
    while (i < len) {
        if (chrtoi(s[i]) != -1) {
            orgnode = findnext(s, arr, &idx, i);
            i = orgnode.lastidx+1;
        } else {
            arr[idx++] =s[i];
            i++;
        }
    }
 
    arr[idx++] = '\0';
    return arr;
}