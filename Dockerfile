# Use the official Python image
FROM python:3.10

# Set the working directory in the container
WORKDIR /app

# Copy the current directory contents into the container
COPY . /app

# Install any needed packages specified in requirements.txt
RUN pip install -r requirements.txt

# Make port 5000 available to the world outside this container
EXPOSE 4000 

# Define environment variable
ENV NAME=FlaskApp

# Run app.py when the container launches
CMD ["python3", "app.py"]
