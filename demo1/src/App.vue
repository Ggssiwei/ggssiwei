<template>
  <div id="app">
    <h1>父组件在这呢!</h1>

    <components1 :message="msg"></components1>
    <input type="text" v-model="msg">
  </div>
</template>

<script>


export default {
  name: 'app',
  data(){
    return {
      msg: "Hello!"
    }
  },
  components: {
      components1
    }
}
</script>

<style>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
