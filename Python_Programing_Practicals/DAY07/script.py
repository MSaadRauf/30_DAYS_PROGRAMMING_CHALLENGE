def main():
    favorite_movies = []  # Create an empty list to store favorite movies

    # Keep prompting the user until they type 'stop'
    while True:
        movie = input("Enter your favorite movie (type 'stop' to finish): ")
        if movie.lower() == 'stop':
            break  # Exit the loop if the user types 'stop'
        else:
            favorite_movies.append(movie)  # Add the movie to the list

    # Print the list of favorite movies
    print("Your favorite movies:")
    for movie in favorite_movies:
        print(movie)

if __name__ == "__main__":
    main()
