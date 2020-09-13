//
// Created by lukec on 13/09/2020.
//

#ifndef LIBRARY_NOTE_H
#define LIBRARY_NOTE_H

#include "NoteLetter.h"

namespace notes {
    /**
        Represents a Musical note.
    **/

    class Note {
        private:
            /**
            Letter of the musical note.
            **/
            NoteLetter mNoteLetter;

        public:
            /**
                Returns the letter of the musical note.
             **/
            NoteLetter getLetter() const;
    };
}

#endif //LIBRARY_NOTE_H
