public class LibraryBook {

    String title = "Unknown";
    String author = "Unknown";
    int pages = 1;



    public String setTitle(String title){
        return this.title = title;
    }

    public String setAuthor(String author){
        return this.author = author;
    }

    public int setPages(int pages) {
        if (pages > 0){
            return this.pages = pages;
        }else {
            return this.pages = 1;
        }
    }





    public String getBookTitle(){
    return title;
    }

    public String getAuthor(){
        return author;
    }

    public int getPage(){
        return pages;
    }

    public boolean isThink(){
        if (pages > 500){
            return true;
        }else {
            return false;
        }
    }

}
