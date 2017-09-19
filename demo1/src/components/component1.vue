<template>
  <div id="cp1">
    <h2>这里是子组件</h2>

    <div>
      父组件传来的值为：{{message}}
    </div>
  </div>
</template>

<script>


export default {
  props:['message']
}
</script>

<style>
#cp1 {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
