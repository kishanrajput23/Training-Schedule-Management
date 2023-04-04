# Training Schedule Management

## How To Setup?

### Step 1:

- First of all download this project in your local system and extract the files. Below are details how you can do that:

1. Click on this green color `Code` Button.

<img width="331" alt="image" src="https://user-images.githubusercontent.com/70385488/223937703-c20e271d-badb-4943-9db8-9ab3adde6ec5.png">

2. In dropdown menu please select `Download ZIP` option.

<img width="399" alt="image" src="https://user-images.githubusercontent.com/70385488/223938052-a67a3cd0-18cf-458a-89d7-709c033e5e36.png">

3. After downloading `ZIP File` please unzip it.

### Step 2:

- Now please open `Project_Flies` folder in your favourite code editor like `VS Code` or you can open in any other editor.

- After that your code editor should look like below :

<img width="1440" alt="image" src="https://user-images.githubusercontent.com/70385488/223939421-c8abdd4e-dfc7-4a48-aec5-a3fd9a76b8d7.png">

- I hope you have followed all above steps carefully. Now you have to change certain things before running this project.

### Step 3:

- Firstly open `main.cpp` file and it should look like this.

<img width="1440" alt="image" src="https://user-images.githubusercontent.com/70385488/223940008-188b0f8c-a947-4abf-91ec-e97b1f8ac873.png">

- Now you have to make changes in line number 5, 6 and 115.
- In line numnber 5 copy the path of `adminLogin.h` file and paste that path in between double quotes `""`. Please make sure that you should not give any other extra spaces in between double quotes.
- For copying path of `adminLogin.h` file, just right click on `adminLogin.h` file which is located in `include` folder and paste it in line number 5.

<img width="478" alt="image" src="https://user-images.githubusercontent.com/70385488/223941154-09ca8bb5-d119-463c-8df1-119f75144780.png">

- Now in line numnber 6 copy the path of `facultyLogin.h` file and paste that path in between double quotes `""`. Please make sure that you should not give any other extra spaces in between double quotes.
- For copying path of `facultyLogin.h` file, just right click on `facultyLogin.h` file which is also located in `include` folder and paste it in line number 6.

<img width="500" alt="image" src="https://user-images.githubusercontent.com/70385488/223941881-f0636501-4c28-4890-8434-e28ace539173.png">

- Now in line numnber 115 copy the path of `facultyLogin.csv` file and paste that path in between double quotes `""`. Please make sure that you should not give any other extra spaces in between double quotes.
- For copying path of `facultyLogin.csv` file, just right click on `facultyLogin.csv` file which is located in `data` folder and paste it in line number 115.

<img width="579" alt="image" src="https://user-images.githubusercontent.com/70385488/223942544-a7d52f1c-81ff-4b5d-b970-a6ccf353eb4b.png">

### Step 4:

- Open `adminLogin.h` file.
- Now you have to make changes in line number 205, 231, 243, 310, 356, 362, 408.
- I hope you have understood that how you can copy the path of any file. If not please refer above images for better understanding.
- Now copy the path of `schedule.csv` file which is located in `data` folder and paste it in line numbers 205, 231, 243, 310, 356 and 408.
- Next copy the path of `trainerallotment.csv` file which is also located in `data` folder and paste it in line number 362.

### Step 5:

- Open `facultyLogin.h` file.
- Now you have to make changes in line number 37.
- So, copy the path of `trainerallotment.csv` file which is located in `data` folder and paste it in line number 37.
- Finally you have made the all changes in above files. Now Let's discuss how you gonna run this project successfully.


## How To Run?

- For running this project just run the `main.cpp` file and it will redirect you to `Homepage` of **Training Schedule Management** project and it will give you 3 options :
1. Admin Login
- For admin login you can use predefined username and password i,e, Username : admin and Password : 12345.
- After login successfully, it will give you access of all operations that an admin can perform.

**Note:** If an admin enters wrong username and password 3 times consecutively then the program will automatically stops and shows `ACCESS DENIED` message to an admin.

2. Faculty Login
- For faculty login you can use predefined username and password which is already given in `facultyLogin.csv` file.
- After login successfully, it will give you access of all operations that a faculty can perform.

**Note:** Just like admin if a faculty also enters wrong username and password 3 times consecutively then the program will automatically stops and shows `ACCESS DENIED` message to faculty.

3. Exit
- This option allows an user to exit from the program completely.

## Still Have Confusion?
- So, after following all above given instructions, still you are facing some difficulties/issues then feel free to reach out to me or just open an issue in this repository and I'll definately get back to you.

## Connect With Me [👤](https://linktr.ee/kishan_rajput23)👈
