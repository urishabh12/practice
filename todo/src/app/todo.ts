export class Todo {
  id: number;
  title: string;
  isCompleted: boolean = false;

  constructor(id: number, title: string) {
    this.id = id;
    this.title = title;
  }
}
