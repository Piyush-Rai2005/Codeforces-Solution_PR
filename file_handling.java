import java.io.*;
import java.util.ArrayList;
import java.util.List;

class Employee{
    String empName;
    int id;
    double baseSalary;
     
    Employee(String empName, int id, double baseSalary){
        this.empName = empName;
        this.id = id;
        this.baseSalary = baseSalary;
    }

    Employee(String empName, int id) {
        this.empName = empName;
        this.id = id;
    }

    double calculate_salary(double baseSalary){
        return baseSalary;
    }
     
    void displayDetails(){
        System.out.println("Employee name: " + empName);
        System.out.println("Employee Id: " + id);
    }
}

class manager extends Employee{
    int projects;

    manager(String empName, int id, int projects, double baseSalary){
        super(empName, id, baseSalary);
        this.projects = projects;
    }

    @Override
    double calculate_salary(double baseSalary){
        return super.calculate_salary(baseSalary) + 1000 * projects;
    }

    @Override
    void displayDetails(){
        super.displayDetails();
        System.out.println("Role: Manager");
        System.out.println("Number of Projects: " + projects);
        System.out.println("Salary of manager is: " + calculate_salary(baseSalary));
    }
}

class engineer extends Employee{
    int hoursWorked;
    double ratePerHour;

    engineer(String empName, int id, int hoursWorked, double ratePerHour){
        super(empName, id);
        this.hoursWorked = hoursWorked;
        this.ratePerHour = ratePerHour;
    }

    @Override
    double calculate_salary(double baseSalary){
        baseSalary = hoursWorked * ratePerHour;
        return baseSalary;
    }

    @Override
    void displayDetails(){
        super.displayDetails();
        System.out.println("Role: Engineer");
        System.out.println("Number of Hours: " + hoursWorked);
        System.out.println("Hourly Rate: " + ratePerHour);
        System.out.println("Salary of engineer is: " + calculate_salary(baseSalary));
    }
}

class intern extends Employee{
    double internStipend;

    intern(String empName, int id, double internStipend) {
        super(empName, id);
        this.internStipend = internStipend;
    }

    @Override
    double calculate_salary(double internStipend){
        return internStipend;
    }

    @Override
    void displayDetails(){
        super.displayDetails();
        System.out.println("Role: Intern");
        System.out.println("Salary of intern is: " + calculate_salary(internStipend));
    }
}

public class employee_file_handling{
    public static void main(String[] args) {
        String fileLocation = "employees.txt";
        List<Employee> employeeList = new ArrayList<>();

        try {
            BufferedReader bufferReader = new BufferedReader(new FileReader(fileLocation));
            String dataLine;
            while ((dataLine = bufferReader.readLine()) != null){
                String[] data = dataLine.split(", ");

                String jobTitle = data[0];
                String empName = data[1];
                int id = Integer.parseInt(data[2]);

                switch (jobTitle) {
                    case "Manager":
                        int projectCount = Integer.parseInt(data[3]);
                        double managerSalary = Double.parseDouble(data[4]);
                        employeeList.add(new manager(empName, id, projectCount, managerSalary));
                        break;
                    case "Engineer":
                        int workHours = Integer.parseInt(data[3]);
                        double engineerRate = Double.parseDouble(data[4]);
                        employeeList.add(new engineer(empName, id, workHours, engineerRate));
                        break;
                    case "Intern":
                        double internPay = Double.parseDouble(data[3]);
                        employeeList.add(new intern(empName, id, internPay));
                        break;
                    default:
                        System.out.println("Unknown employee type: " + jobTitle);
                }
            }
        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }

        for (Employee emp : employeeList) {
            emp.displayDetails();
            System.out.println();
        }
    }
}
