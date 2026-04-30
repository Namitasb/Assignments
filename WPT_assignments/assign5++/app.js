const jokeBtn = document.getElementById("jokeBtn");
const jokeText = document.getElementById("jokeText");
const loader = document.getElementById("loader");
const errorText = document.getElementById("errorText");

const API_URL = "https://v2.jokeapi.dev/joke/Any";

jokeBtn.addEventListener("click", getJoke);

async function getJoke() {
    loader.classList.remove("d-none");
    jokeText.textContent = "";
    errorText.textContent = "";

    try {
        const response = await fetch(API_URL);

        if (!response.ok) {
            throw new Error("Failed to fetch joke");
        }

        const data = await response.json();

        if (data.type === "single") {
            jokeText.textContent = data.joke;
        } else {
            jokeText.textContent = `${data.setup}  ${data.delivery}`;
        }

    } catch (error) {
        errorText.textContent = "Something went wrong! Please try again.";
        console.error(error);
    } finally {
        loader.classList.add("d-none");
    }
}