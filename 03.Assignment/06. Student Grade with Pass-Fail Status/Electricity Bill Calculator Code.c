#include <stdio.h>

int main() {
    int readingTime, writingTime, totalTime;
    int thresholdLow, thresholdHigh;

    // Ask the user to set their own thresholds
    printf("Apne liye time thresholds set karo:\n");
    printf("1 ghante se zyada ke liye threshold (minutes mein): ");
    scanf("%d", &thresholdHigh);
    
    printf("1 ghante se kam ke liye threshold (minutes mein): ");
    scanf("%d", &thresholdLow);

    // Input validation for reading time
    do {
        printf("Apna reading time confessions par (minutes mein) daalo: ");
        scanf("%d", &readingTime);
        if (readingTime < 0) {
            printf("Ghalat input! Negative time nahi ho sakta. Dobara koshish karo.\n");
        }
    } while (readingTime < 0);

    // Input validation for writing time
    do {
        printf("Apna writing time confessions par (minutes mein) daalo: ");
        scanf("%d", &writingTime);
        if (writingTime < 0) {
            printf("Ghalat input! Negative time nahi ho sakta. Dobara koshish karo.\n");
        }
    } while (writingTime < 0);

    // Calculate total time
    totalTime = readingTime + writingTime;

    // Display appropriate message based on total time
    if (totalTime > thresholdHigh) {
        printf("Oye! Aapne %d minutes confessions mein laga diye? Itna waqt barbaad! "
               "Socho agar yeh %d minutes parhai ya skill seekhne mein lagate, toh kidhar pohanch gaye "
               "hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur "
               "apne goals par focus karo!\n", totalTime, thresholdHigh);
    } else if (totalTime >= thresholdLow) {
        printf("Abey yar, aapne %d minutes confessions par lagaye, jo thoda zyada ho gaya na? "
               "Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? "
               "Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!\n", totalTime);
    } else {
        printf("Wah bhai, kamal kar rahe ho! Sirf %d minutes mein confessions check kiye, "
               "aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. "
               "Parhai aur apne goals pe dhyan rakho, shabash!\n", totalTime);
    }

    // Encouragement to reflect on time
    printf("Socho, agar aapne yeh waqt kisi aur productive activity mein guzara hota, "
           "toh kya kar sakte the? Aapke goals aur interests ko madde nazar rakhein!\n");

    return 0;
}

