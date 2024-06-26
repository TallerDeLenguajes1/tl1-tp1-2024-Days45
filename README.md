## .gitignore

### ¿Por qué es conveniente incluirlo?
- Ayuda a mantener tus repositorios de Git limpios y organizados.
- Evita que tengas que gestionar manualmente qué archivos incluir o excluir de tus commits.
- Ignora archivos que no deberían confirmarse por algún motivo, como artefactos de compilación, archivos generados en tiempo de ejecución, archivos ocultos del sistema, archivos personales de configuración de IDE, entre otros.

### ¿Cuándo se debe hacer?
- Agregar tu archivo .gitignore al inicio de tu proyecto.
- Cuando tengas nuevos archivos que quieras ignorar, deberás editar y confirmar manualmente el archivo .gitignore.

### ¿Cómo configuraría el archivo .gitignore?
Para configurar el archivo .gitignore, puedes seguir estos pasos:
1. Abre tu terminal o línea de comandos.
2. Navega hasta la raíz de tu repositorio de Git.
3. Escribe `touch .gitignore` y presiona Enter.
4. Abre el nuevo archivo .gitignore en tu editor de texto preferido.
5. Agrega las rutas de los archivos o directorios que quieres que Git ignore, cada una en una línea nueva.
6. Guarda y cierra el archivo.

### ¿Qué archivos vé?
- .gitignore
- README.md
- tp1_1.c
- tp1_1.exe

### ¿Cuál cree que no hace falta que esté?
seria el ejecutable .exe

### ¿Por qué los apartados 2 y 3 muestran la misma dirección de memoria? 
muestran la misma dirección de memoria porque **apuntado** apunta a **variable**, por lo que la dirección de memoria almacenada por el puntero es la misma que la dirección de memoria de la variable.

###¿Qué obtienes en el punto 4? ¿Es igual a los anteriores? 
obtengo la dirección de memoria del puntero, que es diferente de la dirreción de memoria de **variable**. Esto es por que **apuntado** y **variable** son variables diferentes almacenadas en diferentes ubicaciones de memoria.