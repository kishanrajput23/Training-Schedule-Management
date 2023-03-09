# Training Schedule Management

ABC Software Systems provides software services in the field of Open Source, specializing in Unix Projects.
It is proposed to develop a system that helps companies to keep track of schedules of all the trainings happening in the organization.

## Scope and Overview:
The scope of the Schedule Management System will be to provide the functionality as described in Functional Requirements below. The system will be developed on a Linux box using C language and would provide a command line interface to the end user.

## Functional Requirements
The users of the application are:
1. Admin - Creates and updated schedules of trainings happening on daily basis. 
2. Faculty - Find out trainings allocated to him in a specific duration.
Below are the requirements specific to the types of users:

### Administrator
- The admin should be able to create a new training schedule.
- The admin should be able to update or make changes to existing schedules.
- The admin allocates a schedule to a specific trainer.
- The admin should be able to generate a report of the trainings happening on monthly basis for a specific stream.

### Faculty
- The faculty should be able to find out the schedule assigned to him.
- The faculty should be able to cancel a specific session allotted to him.

### Authentication and Authorization
All users logging into the system should be authenticated using a unique login-id and password. (Operations to be supported based on type of user)

**The build of the application should be possible using a script using make file.** 

## Detailed Specifications:

### Administrator

The Administrative should be able to do the following operations once he has logged in with his unique user id and password:
1. Create a new training schedule
2. Update or make changes to the existing schedules
3. Allocates a schedule to a specific trainer
4. Generate a report of the trainings happening on monthly basis for a specific stream
5. Quit Application

#### Create a new training schedule:
As part of this operation, the admin should have the ability to enter all the details of a new training schedule.
Schedule details include:
1. Technology
2. Batch id
3. Start and end date of the batch
4. Faculty details
5. Venue details
6. Number of participants in the batch

#### Update or make changes to the existing schedules:
As part of this operation, the admin user should have the ability to modify details associated with a training schedule.

#### Allocates a training schedule to a specific trainer:
As part of this operation the admin should have the ability to assign training to a specific trainer. 

#### Generate a report of the trainings happening on a basis for a specific stream:
As part of this operation the admin must be able to generate a report of the trainings happening on monthly basis for a specific stream.

#### Quit Application:
As part of this operation admin should have the ability to quit the application completely.

### Faculty

The faculty should be able to do the following operations once he has logged in with his unique user id and password:
1. Find out the schedule assigned to him
2. Cancel a training schedule allocated to him
3. Quit Application

#### Get details of his/her schedule:
As part of this operation, the faculty has to get details of the training schedule allocated to him/her.

#### Cancel a training schedule allocated to him/her:
As part of this operation, the faculty should be able to request to cancel a training schedule allocated to him/her.

#### Quit Application:
As part of this operation, the card user should have the ability to quit the application completely, saving any active data as necessary.

## Data Organization 

### Admin Login

<img width="511" alt="image" src="https://user-images.githubusercontent.com/70385488/223931073-91309165-85c2-4b53-b14f-c01a827d06db.png">

### Faculty Login

<img width="508" alt="image" src="https://user-images.githubusercontent.com/70385488/223931163-ddb0d043-e44b-489c-b876-18e0a86aa85c.png">

### Training

<img width="507" alt="image" src="https://user-images.githubusercontent.com/70385488/223931237-7a05d1be-ac20-4749-840a-32a6a27832fa.png">

### Faculty Assignments

<img width="506" alt="image" src="https://user-images.githubusercontent.com/70385488/223931312-2f1ab704-1d39-4994-8fd4-f9b8bd4b6b8f.png">
