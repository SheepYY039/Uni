---
<%*
let title = tp.file.title 
if(title.startsWith('Untitled')){
  title=await tp.system.prompt("Title") ?? "Untitled";
  id=tp.file.creation_date('YYYYMMDDHHmmss')
  await tp.file.rename(`${id} ${title}`);
}
let folder = tp.file.folder()
%>
title:  <%* tR += title %>
date created: <% tp.file.creation_date('dddd Do MMMM YYYY HH:mm') %>
course: <% tp.file.folder().toUpperCase() %>
tags: 
  - <%* tR += folder %>
  - <%* tR += folder.slice(0,4).toUpperCase() %>
aliases: [<%* tR += title %>, <%* tR += id %>]

---
# <%* tR += title %>
<% tp.file.cursor() %>

## Links

