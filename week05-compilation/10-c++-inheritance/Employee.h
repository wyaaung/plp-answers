class Employee{
    protected:
        int _id;
        char *_name;
    public:
        int get_id();
        char* get_name();
};

class TemporaryEmployee : public Employee{
    protected:
        char *_end_date;
    public:
        char *get_end_date();
};

class PermanentEmployee : public Employee{
    protected:
        int _office_number;
    public:
        int get_office_number();
};

class Consultant : public TemporaryEmployee{
    private:
        char *_topic;
    public:
        Consultant(int id, char *name, char *end_date, char *topic);
        ~Consultant();
        void consult();
};

class Manager : public PermanentEmployee {
    public:
        Manager(int id, char *name, int office_number);
        ~Manager();
        void take_important_decision();
};

class Director : public Manager {
    public:
        Director(int id, char *name, int office_number);
        ~Director();
        void take_very_important_decision();
};
