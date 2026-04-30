# Homework
⚙️ المتغيرات العامة
C
#define SIZE 10
char buffer[SIZE];
int head = 0;
int tail = 0;
int count = 0;
buffer: مصفوفة لتخزين الأحرف
head: يشير إلى بداية البيانات (مكان القراءة)
tail: يشير إلى نهاية البيانات (مكان الإدخال)
count: عدد العناصر الحالية داخل الـ buffer
🔄 تهيئة الـ Buffer
C
void init() {
    head = 0;
    tail = 0;
    count = 0;
}
تُستخدم لإعادة تعيين القيم وبدء buffer فارغ.
✅ التحقق من الحالة
هل الـ buffer ممتلئ؟
C
int isFull() {
    return count == SIZE;
}
هل الـ buffer فارغ؟
C
int isEmpty() {
    return count == 0;
}
➕ دالة الإدخال (enqueue)
C
void enqueue(char c) {
    if (isFull()) {
        printf("Overflow! Buffer is full.\n");
        return;
    }
    buffer[tail] = c;
    tail = (tail + 1) % SIZE;
    count++;
}
شرح:
تضيف عنصر في نهاية الـ buffer
تستخدم % SIZE لتحقيق الدوران (circular behavior)
تزيد العداد count
➖ دالة الإخراج (dequeue)
C
char dequeue() {
    if (isEmpty()) {
        printf("Underflow! Buffer is empty.\n");
        return '\0';
    }
    char c = buffer[head];
    head = (head + 1) % SIZE;
    count--;
    return c;
}
شرح:
تأخذ أول عنصر من الـ buffer
تحرّك المؤشر head
تقلل count
🚀 الدالة الرئيسية (main)
C
int main() {
    char name[50];
    char full[100];

    init();

    printf("Enter your name: ");
    scanf("%s", name);

    strcpy(full, name);
    strcat(full, "CE-ESY");
الخطوات:
إدخال اسم المستخدم
نسخ الاسم إلى متغير full
إضافة "CE-ESY"
🔁 تخزين البيانات في الـ buffer
C
for (int i = 0; i < strlen(full); i++) {
    enqueue(full[i]);
}
يتم إدخال كل حرف إلى الـ buffer.
🖨️ طباعة البيانات
C
printf("Output: ");
while (!isEmpty()) {
    printf("%c", dequeue());
}
يتم استخراج الأحرف بنفس الترتيب (FIFO)
وطباعتها
✅ التحقق النهائي
C
if (isEmpty()) {
    printf("Buffer is now empty.\n");
}⚙️ المتغيرات العامة
C
#define SIZE 10
char buffer[SIZE];
int head = 0;
int tail = 0;
int count = 0;
buffer: مصفوفة لتخزين الأحرف
head: يشير إلى بداية البيانات (مكان القراءة)
tail: يشير إلى نهاية البيانات (مكان الإدخال)
count: عدد العناصر الحالية داخل الـ buffer
🔄 تهيئة الـ Buffer
C
void init() {
    head = 0;
    tail = 0;
    count = 0;
}
تُستخدم لإعادة تعيين القيم وبدء buffer فارغ.
✅ التحقق من الحالة
هل الـ buffer ممتلئ؟
C
int isFull() {
    return count == SIZE;
}
هل الـ buffer فارغ؟
C
int isEmpty() {
    return count == 0;
}
➕ دالة الإدخال (enqueue)
C
void enqueue(char c) {
    if (isFull()) {
        printf("Overflow! Buffer is full.\n");
        return;
    }
    buffer[tail] = c;
    tail = (tail + 1) % SIZE;
    count++;
}
شرح:
تضيف عنصر في نهاية الـ buffer
تستخدم % SIZE لتحقيق الدوران (circular behavior)
تزيد العداد count
➖ دالة الإخراج (dequeue)
C
char dequeue() {
    if (isEmpty()) {
        printf("Underflow! Buffer is empty.\n");
        return '\0';
    }
    char c = buffer[head];
    head = (head + 1) % SIZE;
    count--;
    return c;
}
شرح:
تأخذ أول عنصر من الـ buffer
تحرّك المؤشر head
تقلل count
🚀 الدالة الرئيسية (main)
C
int main() {
    char name[50];
    char full[100];

    init();

    printf("Enter your name: ");
    scanf("%s", name);

    strcpy(full, name);
    strcat(full, "CE-ESY");
الخطوات:
إدخال اسم المستخدم
نسخ الاسم إلى متغير full
إضافة "CE-ESY"
🔁 تخزين البيانات في الـ buffer
C
for (int i = 0; i < strlen(full); i++) {
    enqueue(full[i]);
}
يتم إدخال كل حرف إلى الـ buffer.
🖨️ طباعة البيانات
C
printf("Output: ");
while (!isEmpty()) {
    printf("%c", dequeue());
}
يتم استخراج الأحرف بنفس الترتيب (FIFO)
وطباعتها
✅ التحقق النهائي
C
if (isEmpty()) {
    printf("Buffer is now empty.\n");
}
