document.getElementById("addBtn").addEventListener("click", add);

function add() {
  const input = document.getElementById("taskInput");
  const text = input.value.trim();

  if (!text) {
    alert("Please enter a task.");
    return;
  }

  const taskList = document.getElementById("taskList");

  // Create task container
  const taskItem = document.createElement("div");
  taskItem.className = "task-item";

  // Create checkbox
  const checkbox = document.createElement("input");
  checkbox.type = "checkbox";

  // Create task text span
  const taskText = document.createElement("span");
  taskText.textContent = text;

  // When checkbox toggled, add/remove line-through
  checkbox.addEventListener("change", () => {
    if (checkbox.checked) {
      taskText.style.textDecoration = "line-through";
      taskText.style.color = "gray";
    } else {
      taskText.style.textDecoration = "none";
      taskText.style.color = "black";
    }
  });

  // Create delete button
  const deleteBtn = document.createElement("button");
  deleteBtn.className = "delete-btn";
  deleteBtn.textContent = "X";

  // Delete task on click
  deleteBtn.addEventListener("click", () => {
    taskList.removeChild(taskItem);
  });

  // Append children
  taskItem.appendChild(checkbox);
  taskItem.appendChild(taskText);
  taskItem.appendChild(deleteBtn);

  // Append task to the list
  taskList.appendChild(taskItem);

  // Clear input box
  input.value = "";
}
